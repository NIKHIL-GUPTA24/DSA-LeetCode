#include<iostream>
#include<vector>
using namespace std;
void sort_color(vector<int>arr , int n){
    int start =0;
    int end=n-1;
    int i=0;
    while(i <= end ){
        if(arr[i] == 0){
            swap(arr[i],arr[start]);
            start++;
            i++;
        }
        else if(arr[i] == 2){
            swap(arr[i],arr[end]);
            end--;
        }
        else{
            i++;
        }
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    sort_color(arr ,n);

  return 0;
}