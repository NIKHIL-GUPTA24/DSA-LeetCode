#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  
    void dfs(int node, vector<int> &visited, stack<int> &s, vector<vector<int> >&adj){
        visited[node] = 1;
        for(auto i:adj[node]){
            if(!visited[i]){
                dfs(i, visited, s, adj);
            }
        }
        
        s.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int> >adj(V);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        vector<int> visited(V, false);
        stack<int> s;
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i, visited, s, adj);
                
            }
        }
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
        
    }
};