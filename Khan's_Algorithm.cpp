#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;

// algorithm
//-> Find the adjacency list of the graph
//-> Find indegree of the nodes
//-> push the node into the queue which have 0 indegree of the graph
//-> while queue is not empty , traverse
//->> pop front element of the queue and store into a variable
//->> push front element of the queue into the ans
//->>traverse all frontnode connected nodes
//->>> decrese the indegree the neighbors node of the frontnode
//->>> if indegree of the neighbors node is 0 then push into the queue
//-> return ans

vector<int> TopologicalSortKhan(vector<vector<int>> &edges, int v, int e)
{
    vector<vector<int>> adj(v);
    vector<int> indegree(v, 0);
    queue<int> q;
    // Find adjacency list of the graph
    for (int i = 0; i < e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
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
    for (int i = 0; i < v; i++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }

    // do dfs
    vector<int> ans;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        ans.push_back(u);
        for (auto v : adj[u])
        {
            indegree[v]--;
            if (indegree[v] == 0)
                q.push(v);
        }
    }

    // return ans
    return ans;
}

int main()
{

    return 0;
}