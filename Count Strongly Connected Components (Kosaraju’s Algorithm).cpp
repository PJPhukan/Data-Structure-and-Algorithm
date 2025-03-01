#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;

void dfs(unordered_map<int, list<int>> &adj, stack<int> &s, unordered_map<int, bool> &visited, int node)
{
    visited[node] = true;

    for (auto neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            dfs(adj, s, visited, neighbour);
        }
    }

    s.push(node);
}

void dfsSSC(unordered_map<int, list<int>> &traspose, unordered_map<int, bool> &visited, int top)
{
    visited[top] = true;

    for (auto neighbour : traspose[top])
    {
        if (!visited[neighbour])
        {
            dfsSSC(traspose, visited, neighbour);
        }
    }
}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
    // create adjuncency list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // steps to do kosaraju algorithm
    // 1. Find the topological sort of the graph
    // 2. Transpose the graph
    // 3. DFS

    // step 1
    stack<int> s;
    unordered_map<int, bool> visited;

    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            dfs(adj, s, visited, i);
        }
    }

    // step 2
    unordered_map<int, list<int>> traspose;

    for (int i = 0; i < v; i++)
    {
        visited[i] = 0;
        for (auto nbr : adj[i])
        {
            traspose[nbr].push_back(i);
        }
    }

    // step 3
    int count = 0;
    while (!s.empty())
    {
        int top = s.top();
        s.pop();

        if (!visited[top])
        {
            count++;
            dfsSSC(traspose, visited, top);
        }
    }

    return count;
}

int main()
{

    return 0;
}