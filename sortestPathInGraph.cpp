#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
#include <limits.h>
#include <list>
#include <queue>
#include <unordered_map>
#include <bits/stdc++.h>
#include <limits.h>>
using namespace std;

vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s,
                         int t)
{
    // first crate adjajency list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int, int> parent;
    unordered_map<int, bool> visited;
    queue<int> q;

    visited[s] = 1;
    parent[s] = -1;
    q.push(s);

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();
        for (auto neighbour : adj[frontNode])
        {
            if (!visited[neighbour])
            {
                q.push(neighbour);
                visited[neighbour] = 1;
                parent[neighbour] = frontNode;
            }
        }
    }

    vector<int> ans;
    int node = t;
    ans.push_back(node);
    while (node != s)
    {
        node = parent[node];
        ans.push_back(node);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

// using dfs
class Graph
{
public:
    // Here 0 is u , {1,2} is v and w ( u->[v,w])

    unordered_map<int, list<pair<int, int>>> adj;

    // add edge
    void AddEdge(int u, int v, int weight)
    {
        // create adjacent element with weight
        pair<int, int> p = make_pair(v, weight);
        // push into the adjacent array
        adj[u].push_back(p);
    }

    // print adjacent list
    void PrintAdj()
    {
        for (auto i : adj)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << "[" << j.first << "," << j.second << "] ";
            }
            cout << endl;
        }
    }

    // topological sort using dfs
    void topologicalSort(int node, unordered_map<int, bool> &visited, stack<int> &s)
    {
        visited[node] = true;
        for (auto i : adj[node])
        {
            if (!visited[i.first])
            {
                topologicalSort(i.first, visited, s);
            }
        }
        s.push(node);
    }

    // sortest path
    void SortestPatch(int src, vector<int> &distances, stack<int> &s, int n)
    {

        distances[src] = 0;

        while (!s.empty())
        {
            int top = s.top();
            s.pop();

            if (distances[top] != INT_MAX)
            {
                for (auto i : adj[top])
                {
                    int weight = i.second;
                    if (distances[top] + weight < distances[i.first])
                    {
                        distances[i.first] = distances[top] + weight;
                    }
                }
            }
        }
    }
};

int main()
{
    Graph g;
    g.AddEdge(0, 1, 5);
    g.AddEdge(0, 3, 3);
    g.AddEdge(1, 2, 2);
    g.AddEdge(1, 3, 6);
    g.AddEdge(2, 3, 7);
    g.AddEdge(2, 4, 4);
    g.AddEdge(2, 5, 2);
    g.AddEdge(3, 4, -1);
    g.AddEdge(4, 5, -2);

    g.PrintAdj();

    int n = 6;
    unordered_map<int, bool> visited;
    stack<int> s;

    // topological sort
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.topologicalSort(i, visited, s);
        }
    }

    int src = 1;

    vector<int> distances(n);
    for (int i = 0; i < n; i++)
    {
        distances[i] = INT_MAX;
    }
    g.SortestPatch(src, distances, s, n);

    cout << "Shortest Path from " << src << " to all other nodes: " << endl;
    for (int i = 0; i < distances.size(); i++)
    {
        cout << distances[i] << " ";
    }
    return 0;
}