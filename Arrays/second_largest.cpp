#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[100];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n-1;i++){         //-> Brute Force (First sort the elements and index of 
    for(int j=0;j<n-i-1;j++){    //       last element is the largest element)
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  for(int i=n-2;i>=0;i--){
    if(a[i]!=a[n-1]){
        cout<<"Second Largest Element:"<<a[i];
        break;
    }
  }
  return 0;
}