//Kruskal Algorithm

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <list>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool cmp(vector<int> &a, vector<int> &b) { return a[2] < b[2]; }

// initialized parent and rank
void makeSet(vector<int> &parent, vector<int> &rank, int n) {
  for (int i = 0; i < n; i++) {
    parent[i] = i; // at the first time node parent is iteself
    rank[i] = 0;   // rank for all at the first time it will be 0
  }
}

// find parent
int findParent(vector<int> &parent, int node) {
  if (parent[node] == node) {
    return node;
  }

  // return findParent(parent, parent[node]);
  return parent[node] = findParent(parent, parent[node]); // path compression
}

// union set
void unionSet(int u, int v, vector<int> &parent, vector<int> &rank) {

  // Find parent
  int uParent = findParent(parent, u); // find parent of u
  int vParent = findParent(parent, v); // find parent of v

  // compare rank
  if (rank[uParent] < rank[vParent]) {
    parent[uParent] = vParent;
    rank[vParent]++;
  } else if (rank[uParent] > rank[vParent]) {
    parent[vParent] = uParent;
    rank[uParent]++;
  } else {
    parent[vParent] = uParent;
    rank[uParent]++;
  }
}

int minimumSpanningTree(vector<vector<int>> &edges, int n) {

  sort(edges.begin(), edges.end(), cmp); // it will sort based on weight
  vector<int> parent(n);
  vector<int> rank(n);

  // initialize parent , rank
  makeSet(parent, rank, n);

  int minimumWeight = 0;
  for (int i = 0; i < edges.size(); i++) {
    int u = findParent(parent, edges[i][0]); // find parent of u
    int v = findParent(parent, edges[i][1]); // find parent of v

    if (u != v) {
      unionSet(u, v, parent, rank);
      minimumWeight += edges[i][2];
    }
  }

  return minimumWeight;
}

int main(){

    return 0;
}