#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    if(i==1){
        cout<<1;
    }
    cout<<endl;
  for( i=2 ;i<=n;i++){
    cout<<i-1;
    for(int j=1;j<=i-2;j++){
        cout<<0;
    }
    cout<<i-1;
    cout<<endl;
  }
  return 0;
}