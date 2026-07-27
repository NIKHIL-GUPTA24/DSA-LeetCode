#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[100];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
//   int ans=a[0];
//   for(int i=1;i<n;i++){          ->  Optimal Approach 
//     if(a[i]>ans){
//         ans=a[i];
//     } 
//   }
//   cout<<ans;

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
  cout<<"Largest element is :"<<a[n-1];
  return 0;
}