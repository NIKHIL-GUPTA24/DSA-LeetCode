#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
    int n, m;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;
    // Adjacency List
    vector<vector<int>> adj(n);

    // Input edges
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // Undirected Graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // Visited array
    vector<bool> visited(n, false);
    // Queue for BFS
    queue<int> q;
    // Start from node 0
    q.push(0);
    visited[0] = true;

    cout << "BFS Traversal: ";
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(int neighbour : adj[node]) {
            if(!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
    return 0;
}