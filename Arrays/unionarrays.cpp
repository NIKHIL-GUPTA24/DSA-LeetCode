#include<iostream>
#include<vector>
using namespace std;

void unions (vector<int> arr , int n , vector <int> brr , int m  ){
    vector <int> ans ;

    for (int i=0 ; i < n ; i++){
        ans.push_back(arr[i]);
    }
    for (int j=0 ; j<m ; j++){
        ans.push_back(brr[j]);
    }
    
    for (int k =0 ; k< ans.size() ; k++){
        cout << ans[k] << " ";
     }
    }

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
unions (arr , n , brr ,m );
    return 0;
}