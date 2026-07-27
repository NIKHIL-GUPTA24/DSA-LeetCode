#include<iostream>
using namespace std;
int main(){
  int n=7;
  for(int i=1;i<=n;i++){
  if(i%2==1){
        for(int j=1;j<=i;j++){
            cout<<1;
        }
        cout<<endl;
  }
  else{
        cout<<1;
        for(int j=2;j<=i-1;j++){
            cout<<0;
        }
        cout<<1;
        cout<<endl;
    }
  }
  return 0;
}