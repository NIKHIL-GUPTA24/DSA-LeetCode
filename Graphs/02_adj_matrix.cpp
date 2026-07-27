#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of nodes "<<endl;
    cin>>n;
    int m;
    cout<<"Enter no of edges "<<endl;
    cin>>m;
    int adj[100][100]={0};
    for(int i=0;i<m;i++){
        int u , v;
        cin>>u >>v;
        adj[u][v] = 1;
        //adj[v][u] == 1;
    }
    cout<<"Adjacency Matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
  return 0;
}