//Method -1: using sum

#include<iostream>
#include<vector>
using namespace std;

int find_missing(vector<int>&arr){
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int sum=max*(max+1)/2;

    int arr_sum=0;
    for(int j=0;j<arr.size();j++){
        arr_sum=arr_sum+arr[j];
    }
    return (sum - arr_sum) ;
}
int main(){
   vector<int>arr={1,2,3,4,5,7,8};
   cout<<"The Missing Element is: "<<find_missing(arr)<< endl;
}