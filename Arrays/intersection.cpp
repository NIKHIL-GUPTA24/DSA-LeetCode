#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
int main (){

    int n , m;
    cout << "Enter no of elements in array 1 :" << endl ;
    cin >> n;

    vector<int>arr(n);
    for ( int i=0 ; i< arr.size () ; i++){
        cin >> arr[i];
    }
    cout << " Enter no of elements in array 2 : " << endl ;
    cin >> m;
     vector<int>brr(m);
     for (int j=0 ; j< brr.size (); j++){
        cin >> brr[j];
     }

     for (int i=0 ;i< arr.size ();i++){
        for (int j=0 ; j<brr.size();j++){
            if (arr[i]==brr[j]){
                brr[j] = INT_MIN ;
                cout << arr[i] << " "; 
            }
        }
     }
}