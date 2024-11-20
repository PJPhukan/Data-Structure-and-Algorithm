#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;

#include <list>
#include <queue>
#include <unordered_map>

// using dfs
bool isCycleDetected(unordered_map<int, list<int>> adj,
                     unordered_map<int, bool> &visited,
                     unordered_map<int, bool> &dfscall, int node)
{
    visited[node] = 1;
    dfscall[node] = 1;
    for (int neighber : adj[node])
    {
        if (!visited[neighber])
        {
            bool isDetectedCycle = isCycleDetected(adj, visited, dfscall, neighber);
            if (isDetectedCycle)
            {
                return true;
            }
        }
        else if (dfscall[neighber])
        {
            return true;
        }
    }
    dfscall[node] = false;
    return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
{

    /*
    //using dfs
      unordered_map<int, list<int>> adj;
      // creating a directed list
      for (int i = 0; i < edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
      }
      unordered_map<int, bool> visited;
      unordered_map<int, bool> dfscall; // to store
      for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
          bool ans = isCycleDetected(adj, visited, dfscall, i);
          if (ans) {
            return true;
          }
        }
      }
      return false;
      */

    // using bfs

    vector<vector<int>> adj(n + 1);
    vector<int> indegree(n + 1, 0);
    queue<int> q;
    // Find adjacency list of the graph
    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v); // u->v
    }

    // find indegree of all nodes
    for (auto i : adj)
    {
        for (auto j : i)
        {
            indegree[j]++;
        }
    }

    // push the nodes which have 0 degree
    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    // do dfs
    int count = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        count++;

        for (auto v : adj[u])
        {
            indegree[v]--;
            if (indegree[v] == 0)
                q.push(v);
        }
    }

    if (count == n)
        return false;
    else
        return true;
}

int main()
{

    return 0;
}