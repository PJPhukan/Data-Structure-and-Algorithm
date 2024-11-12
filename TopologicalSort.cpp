#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;
 //using dfs
void solve(vector<vector<int>> adj, vector<bool> &visited, stack<int> &s,
           int node)
{
    visited[node] = 1;

    for (auto neighber : adj[node])
    {
        if (!visited[neighber])
        {
            solve(adj, visited, s, neighber);
        }
    }

    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{
    // create adjancency list
    vector<vector<int>> adj(v);
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    stack<int> s;
    vector<bool> visited(v);

    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            solve(adj, visited, s, i);
        }
    }

    // pop all element from stack ans push into ans
    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

int main()
{

    return 0;
}