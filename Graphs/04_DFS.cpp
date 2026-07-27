#include<iostream>
#include<vector>
using namespace std;

// DFS Function
void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &ans){
    // Visit current node
    visited[node] = true;
    // Store answer
    ans.push_back(node);
    // Visit all neighbours
    for(int neighbour : adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour, adj, visited, ans);
        }
    }
}
int main(){
    int n, m;
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter number of edges: ";
    cin>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        // Undirected Graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n,false);
    vector<int> ans;
    // For disconnected graph
    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(i,adj,visited,ans);
        }
    }

    cout<<"DFS Traversal: ";
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}