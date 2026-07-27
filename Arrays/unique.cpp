#include<iostream>
#include<vector>
using namespace std;

    int findunique (vector<int>arr) {
        int ans=0;
        for (int i=0 ; i<arr.size() ; i++){
            ans = ans ^ arr[i] ;
        }
    return ans;

    }

    int main (){
    int n;
    cout<<"Enter the size of array :"<<endl;
    cin >> n;
     
    vector<int>arr(n);
    cout<<"Enter the elements"<<endl;

    for (int i=0 ; i < n ; i++){
        cin>>arr[i];
    }
    int unique_element = findunique(arr);
    cout<<"The Unique element is :"<<unique_element<<endl;
    return 0;

}