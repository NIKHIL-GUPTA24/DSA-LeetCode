#include<iostream>
#include<vector>
using namespace std;
int GetPivot(vector<int> &arr){
    int s = 0;
    int e = arr.size()-1;
    while(s < e){
        int mid = s + (e-s)/2;

        if(arr[mid] >= arr[0]) s = mid + 1;
        else e = mid;
    }
    return s;
}
int main(){
    vector<int> arr = {3,8,10,5,9,12};
    cout<< "pivot Element is:" <<GetPivot(arr); 
}