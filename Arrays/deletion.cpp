#include<iostream>
using namespace std;
int main(){
    int pos=3;
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    int deleted;
    for(int i=0 ; i < n ; i++ ){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The New array is:"<<endl;
    deleted=arr[pos-1];
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<n;
    cout<<endl;
    cout<<deleted;
}