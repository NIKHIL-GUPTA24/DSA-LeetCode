#include<iostream>
using namespace std;
void number (int n){
    for (int i=1; i<=n; i++){
        cout << i << " " ;

    }
    cout << endl ;
}

int main (){
    int a;
    cout << "Enter a number :" << endl;
    cin >> a ;
    number (a);
    return 0;
}