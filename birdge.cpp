#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;

#include <unordered_map>
#include <list>

void dfs(int node, unordered_map<int, list<int>> &adj, int parent,
         vector<int> &disc, vector<int> &low, unordered_map<int, bool> &visited,
         int &time, vector<vector<int>> &result)
{
    visited[node] = true;
    disc[node] = low[node] = time++;

    for (auto neighbour : adj[node])
    {
        if (neighbour == parent)
        {
            continue;
        }
        if (!visited[neighbour])
        {
            dfs(neighbour, adj, node, disc, low, visited, time, result);
            low[node] = min(low[node], low[neighbour]);
            // bridge
            if (low[neighbour] > disc[node])
            {
                vector<int> ans;
                ans.push_back(node);
                ans.push_back(neighbour);

                result.push_back(ans);
            }
        }
        else
        {
            // back edge
            low[node] = min(low[node], disc[neighbour]);
        }
    }
}

vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e)
{

    // create adjacency list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < edges.size(); i++)
    {
        int v = edges[i][0];
        int u = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int time = 0;
    vector<int> disc(v);
    vector<int> low(v);
    unordered_map<int, bool> visited(v);
    int parent = -1;

    // initialize discovery, low and visited
    for (int i = 0; i < v; i++)
    {
        disc[i] = -1;
        low[i] = -1;
        visited[i] = false;
    }

    vector<vector<int>> result;
    // dfs
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            dfs(i, adj, parent, disc, low, visited, time, result);
        }
    }

    return result;
}

int main()
{

    return 0;
}