/*      * * * * * * * 
        * * *   * * *
        * *       * *
        *           *
        * *       * *
        * * *   * * *
        * * * * * * *     */
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    cout<<"*    ";
  }
  cout<<endl;
  for(int i=1;i<=(n-1)/2;i++){
    for(int j=(n-1)/2-i+1;j>=1;j--){
        cout<<"*    ";
    }
    for(int k=1;k<=2*i-1;k++){
        cout<<"     ";
    }
    for(int l=(n-1)/2-i+1;l>=1;l--){
        cout<<"*    ";
    }
    cout<< endl;
  }
  for(int i=(n-1)/2;i>1;i--){
    for(int j=(n+1)/2-i+1;j>=1;j--){
      cout<<"*    ";
    }
    for(int k=2*i-3;k>=1;k--){
      cout<<"     ";
    }
    for(int l=(n+1)/2-i+1;l>=1;l--){
      cout<<"*    ";
    }
    cout<<endl;
  }
  for(int i=1;i<=n;i++){
    cout<<"*    ";
  }
  return 0;
}