#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;

vector<int> BallManFord(int n, int m, vector<vector<int>> &edges, int src)
{
    // BALLMAN FORD ALGORITHM is used to find out the sortest path between from a node
    // steps to solve ballman ford algorithm
    // 1. Check the condition n-1 times (if ( dist[u]) != infinity && (dist[u] + wt < dist[v]){ dist[v]=dist[u] + wt})
    // 2. Check the above condition one more times to check negative cycle present or not
    // 3. If there are no any negative cycle present then return the distance array

    vector<int> dist(n + 1, 1e0);
    dist[src] = 0;

    for (int i = 1; i <= n; i++)
    { // to traverse n-1 times
        for (auto edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];

            // check the condtion
            if (dist[u] != 1e8 && (dist[u] + wt < dist[v]))
            {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // check negative cycle present or not

    for (auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];

        // check the condtion
        if (dist[u] != 1e8 && (dist[u] + wt < dist[v]))
        {
            // if any node update at the last time , means that negative cycle present then return a empty resultent array
            return {};
        }
    }
    return dist;
}

int main()
{

    return 0;
}