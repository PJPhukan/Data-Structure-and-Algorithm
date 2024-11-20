#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

// time complexity = O( E log V)

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source)
{
    // Create adjacency list
    unordered_map<int, vector<pair<int, int>>> adj;

    for (int i = 0; i < edges; i++)
    {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> dist(vertices);

    for (int i = 0; i < vertices; i++)
    {
        dist[i] = INT_MAX;
    }

    set<pair<int, int>> st;

    dist[source] = 0;
    st.insert(make_pair(0, source));

    while (!st.empty())
    {
        // fetch top from the set
        auto top = *(st.begin());

        int nodeDistance = top.first;
        int topNode = top.second;

        // remove top node from the set
        st.erase(st.begin());

        // travers all neighbours
        for (auto i : adj[topNode])
        {
            if (nodeDistance + i.second < dist[i.first])
            {

                // find record for the node and distance of the node
                auto record = st.find(make_pair(dist[i.second], i.first));

                // if record found then erase it
                if (record != st.end())
                {
                    st.erase(record);
                }

                // update distance
                dist[i.first] = nodeDistance + i.second;

                // record push into the set
                st.insert(make_pair(dist[i.first], i.first));
            }
        }
    }

    return dist;
}

int main()
{

    return 0;
}