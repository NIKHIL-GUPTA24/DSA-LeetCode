#include<iostream>
#include<vector>
using namespace std;
int main (){

    int n;
    cout<<"Enter no of elements in a vector :",
    cin >>n;

    vector<int>arr(n);
    cout<<"Enter "<<n <<"elements :"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 80;
    for(int j=0;j<arr.size();j++){
        int element=arr[j];

        for(int k=j+1;k<arr.size();k++){
            if(element+arr[k]==sum){
                cout<<"Pair Found "<<element<<","<<arr[k]<<endl;
            }
        }
    }

}