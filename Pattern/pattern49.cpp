/*1
  2 * 2
  3 * 3 * 3
  4 * 4 * 4 * 4
  5 * 5 * 5 * 5 * 5
  4 * 4 * 4 * 4
  3 * 3 * 3
  2 * 2
  1               */
#include<iostream>
using namespace std;
int main(){
  int n=5;
  for(int i=1;i<=n;i++){
    cout<<i<<" ";
    for(int j=1;j<i;j++){
      cout<<"* "<<i<<" ";
    }
    cout<<endl;
  }
  for(int k=n-1;k>=1;k--){
    cout<<k<<" ";
    for(int l=1;l<k;l++){
      cout<<"* "<<k<<" ";
    }
    cout<<endl;
  }
  return 0;
}