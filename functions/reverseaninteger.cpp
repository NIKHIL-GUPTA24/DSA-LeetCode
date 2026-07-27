#include<iostream>
using namespace std ;
int reverse (int n){

    int remainder = 0;
    int solution =0;

    int i =1 ;
    while ( n  ){
        remainder = n % 10 ;
        solution = solution * 10 + remainder ;
        n = n / 10 ;
    }
   
    return solution ; 
}
int main () {
    int n;
    cin >> n ;
    int answer = reverse (n);
    cout << answer ;
}