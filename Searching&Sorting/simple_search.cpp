#include<iostream>
using namespace std;

int binary_search(int arr[],int size, int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;

    while(start<=end){
        int element=arr[mid];

        if(element==target){
            return mid;
        }
        else if(target<element){
            //search on left
            end=mid-1;
        }
        else{
            //search on right
            start=mid+1;
        }   
        mid=(start+end)/2;
    }
    //Element not found
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    int target=1;
    int result=binary_search(arr,size,target);

    if(result==-1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Target found at index: "<<result<<endl;
    }
    return 0;
}