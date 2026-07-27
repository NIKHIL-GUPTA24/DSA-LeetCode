#include<iostream>
using namespace std;
int main(){
  int n=7;
  for(int i=1;i<=(n+1)/2;i++){
    for(int j=1;j<=(n+1)/2-i;j++){
        cout<<"  ";
    }
    cout<<"* ";
    for(int k=2;k<2*i-1;k++){
        cout<<"  ";
    }
    if(i!=1){
        cout<<"* ";
    }
    cout<< endl;
  }
  for(int i=((n+1)/2)-1 ; i>=1 ;i--){
    for(int j=1;j<=(n+1)/2-i;j++){
        cout<<"  ";
    }
    cout<<"* ";
    for(int k=2;k<2*i-1;k++){
        cout<<"  ";
    }
    if(i!=1){
        cout<<"* ";
    }
    cout<< endl;
  }
  return 0;
}