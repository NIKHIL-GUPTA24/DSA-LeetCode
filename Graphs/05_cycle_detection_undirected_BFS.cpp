#include<iostream>
#include<queue>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
public:
    unordered_map<int , list<int> >adj;
    void addedge(int u , int v, bool direction){
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }
    bool bfs(int src ,unordered_map<int , bool> &visited){
        unordered_map<int , int> parent;
        parent[src] = -1;
        visited[src] = true;
        queue<int> q;
        q.push(src);

        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(auto i: adj[front]){
                if(visited[i] == true && i != parent[front]) return true;

                else if(!visited[i]){
                    q.push(i);
                    visited[i] = true;
                    parent[i] = front;
                }
            }
        }
        return false;
    }
};

int main(){
    unordered_map<int , bool>visited;

    int n;
    cout<<"Enter no of nodes: "<<endl;
    cin>>n;
    int m;
    cout<<"Enter no of edges: "<<endl;
    cin>>m;

    graph g;
    bool cycle =false;
    for(int i=0;i<m;i++){
        int u , v;
        cin>>u >> v;
        g.addedge(u ,v, 0);
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            if(g.bfs(i , visited) ){
                cycle = true;
                break;
            }
        }
    }
    if(cycle) cout<<"Cycle Present "<<endl;
    else cout<<"Cycle Not Present "<<endl;

  return 0;
}