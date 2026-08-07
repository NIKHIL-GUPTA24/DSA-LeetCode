#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    
    bool checkcycle(int node, vector <bool> &visited, 
        vector<bool> &dfsvisited, vector<vector <int> >&adj){
        visited[node] = true;
        dfsvisited[node] = true;
        for(auto neighbour: adj[node]){
            if(!visited[neighbour] ){
                bool cycledetected = checkcycle(neighbour, visited, dfsvisited, adj );
                if(cycledetected)
                    return true;
            }
            else if(dfsvisited[neighbour]){
                return true;
            }
        }
        dfsvisited[node] = false;  
        return false;
    }
    
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector <int> >adj(V);
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        vector <bool> visited(V,false);
        vector<bool> dfsvisited(V,false);
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                checkcycle(i, visited, dfsvisited,adj);
            }
        }

        vector<int>safenodes;
        for(int i=0;i<V;i++){
            if(dfsvisited[i] == false){
                safenodes.push_back(i);
            }
        }
        return false;
    }
};