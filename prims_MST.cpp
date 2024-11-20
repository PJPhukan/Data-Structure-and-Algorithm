
// https://www.naukri.com/code360/problems/prim-s-mst_1095633?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
using namespace std;

#include <bits/stdc++.h>
#include <unordered_map>
vector<pair<pair<int, int>, int>>
calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g) {
  // create adjacency list
  unordered_map<int, list<pair<int, int>>> adj;

  for (int i = 0; i < g.size(); i++) {
    int u = g[i].first.first;
    int v = g[i].first.second;
    int w = g[i].second;

    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
  }

  vector<int> key(n + 1);
  vector<bool> mst(m + 1);
  vector<int> parent(n + 1);

  for (int i = 0; i <= n; i++) {
    key[i] = INT_MAX;
    mst[i] = false;
    parent[i] = -1;
  }

  // algorithm
  key[1] = 0; // source node
  parent[1] = -1;

  for (int i = 1; i < n; i++) {
    int mini = INT_MAX;
    int u;

    // find u

    for (int v = 1; v <= n; v++) {
      if (mst[v] == false && key[v] < mini) {
        u = v;
        mini = key[v];
      }
    }

    // mark min node as true
    mst[u] = true;

    // check its adjacent
    for (auto i : adj[u]) {
      int v = i.first;
      int w = i.second;
      if (mst[v] == false && w < key[v]) {
        parent[v] = u;
        key[v] = w;
      }
    }
  }

  vector<pair<pair<int, int>, int>> result;
  for (int i = 2; i <= n; i++) {
    result.push_back({{parent[i], i}, key[i]});
  }

  return result;
}


int main(){

    return 0;
}