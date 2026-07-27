#include<iostream>
using namespace std;
int main(){
    int pos=3;
    int num=10;
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0 ; i < n ; i++ ){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The New array is:"<<endl;
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<n;
}