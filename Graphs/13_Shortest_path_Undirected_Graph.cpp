#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        unordered_map<int , list<int> > adj;
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
            vector<bool> visited(V,false);
            queue<pair<int, int> > q;
            
            q.push({src ,0});
            visited[src] = true;
            while(!q.empty() ){
                auto p = q.front();
                q.pop();
                int node = p.first;
                int count = p.second;
                    
                if(node == dest){
                    return count;
                }
                
                for(auto i: adj[node] ){
                    if(!visited[i]){
                        visited[i] = true;
                        q.push({i, count + 1});
                    }
                }
            }
            return -1;
            
        
    }
};
