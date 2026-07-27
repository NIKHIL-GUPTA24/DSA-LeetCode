#include<iostream>
using namespace std;
int main(){
    int arr[100]={1,1,2,2,2,3,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int count=0;

    for(int i=1;i<n;i++){
        int ans=arr[i-1];
        if(arr[i]!= ans){
            count++;
        }
    }
    cout<<count;
  return 0;
}