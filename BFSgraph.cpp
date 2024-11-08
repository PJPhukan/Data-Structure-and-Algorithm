#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <unordered_map>
using namespace std;

void bfs(vector<vector<int>> &adj, unordered_map<int, bool> &visited,
         vector<int> &ans, int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);

        for (auto j : adj[frontNode])
        {
            if (!visited[j])
            {
                q.push(j);
                visited[j] = 1;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj)
{
    // Write your code here.
    vector<int> ans;
    unordered_map<int, bool> visited;
    /*
      for (int i = 0; i < n; i++) {
        if (!visited[i]) {
          bfs(adj, visited, ans, i);
        }
      }
    */

    bfs(adj, visited, ans, 0);

    return ans;
}

int main()
{

    return 0;
}