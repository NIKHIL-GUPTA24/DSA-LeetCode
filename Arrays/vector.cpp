#include<iostream>
#include<vector>
using namespace std;

int main (){
    // vector<int> arr ;
    // int a = sizeof (arr) / sizeof (int);
    // cout << a << endl ;

    vector <int> arr = {1,2,3,4,5};
    for (int i =0 ; i < arr.size() ; i++){
        cout << arr[i] << " ";
    }

}