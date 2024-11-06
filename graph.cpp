// Graph implementation
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <list>
#include <unordered_map>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;

    // add
    void addEdge(int u, int v, bool direction)
    {
        // direction :0-> undirected
        // direction: 1-> directed

        // add edge
        adj[u].push_back(v);

        // if undirected, add edge in reverse direction
        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    // print edges
    void printAdjacent()
    {
        for (auto i : adj)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << j << " ,";
            }
            cout << endl;
        }
    }
};

// If gives edges in the form of vector
vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>> &edges)
{
    vector<int> ans[n];
    for (int i = 0; i < m; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);
    }

    vector<vector<int>> adj(n);
    for (int i = 0; i < n; i++)
    {
        adj[i].push_back(i);

        // entering neighbouring nodes
        for (int j = 0; j < ans[i].size(); j++)
        {
            adj[i].push_back(ans[i][j]);
        }
    }

    return adj;
}
int main()
{
    int n;
    cout << "Enter the number of nodes : ";
    cin >> n;
    cout << endl;

    int m;
    cout << "Enter the number of edges : ";
    cin >> m;
    cout << endl;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cout << "Enter the edge (u, v) : ";
        cin >> u >> v;
        g.addEdge(u, v, 0); // undirected graph
    }

    // printing graph
    cout << "Graph is : " << endl;
    g.printAdjacent();

    return 0;
}