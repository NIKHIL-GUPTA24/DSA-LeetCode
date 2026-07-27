#include<iostream>
using namespace std;
int main(){
  int n=4;
  int largest=0;
  int no;
  for(int i=1;i<=n;i++){
    cin>>no;
    if(no>largest){
        largest=no;
    }
  }
  cout<<largest;

  return 0;
}