#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;

void dfs(unordered_map<int, list<int>> &adj, vector<bool> &visited, vector<int> &low, vector<int> &disc, int parent, int &timer, vector<int> &ap, int node)
{
    visited[node] = true;
    disc[node] = low[node] = timer++;
    int child = 0;
    for (auto neighbour : adj[node])
    {
        if (neighbour == parent)
        {
            continue;
        }
        if (!visited[neighbour])
        {
            //recursive call for neighbour 
            dfs(adj, visited, low, disc, node, timer, ap, neighbour);

            //while returning
            low[node] = min(low[node], low[neighbour]);

            // check articulation point
            if (low[neighbour] >= disc[node] && parent != -1)
            {
                ap[node] = 1;
            }

            //increment number of element 
            child++;
        }
        else
        {
            // back edge
            low[node] = min(low[node], disc[neighbour]);
        }
    }
    //If first node have multiple node
    if (parent == -1 && child > 1)
    {
        ap[node] = 1;
    }
}

int main()
{

    // create edges
    vector<pair<int, int>> edges; // edges
    edges.push_back(make_pair(0, 3));
    edges.push_back(make_pair(0, 4));
    edges.push_back(make_pair(0, 1));
    edges.push_back(make_pair(1, 2));
    edges.push_back(make_pair(4, 3));

    // adjacency list
    unordered_map<int, list<int>> adj;

    int n = edges.size();

    for (int i = 0; i < n; i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // create data structures
    vector<int> disc(n);
    vector<int> low(n);

    for (int i = 0; i < n; i++)
    {
        disc[i] = -1;
        low[i] = -1;
    }

    vector<bool> visited(n);
    vector<int> ap(n, 0);
    int parent = -1;
    int timer = 0;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(adj, visited, low, disc, parent, timer, ap, i);
        }
    }

    cout << "Articulation points are as follows :" << endl;
    for (int i =0;i<n;i++)
    {
        if (ap[i] != 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}