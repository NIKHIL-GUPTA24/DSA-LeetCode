#include<iostream>
#include <math.h>
using namespace std ;

    int decimaltobinary (int n){
        int binary = 0 ;
      
        for (int i = 0 ; n > 0 ; i++ ){
            int bit = n % 2 ;
            binary = bit * pow (10 , i) + binary ;
            n = n / 2 ;
        }
        return binary;
    }

    int main (){
        int n ;
        cout << "Enter a no :" << endl;
        cin >> n ;
        int answer= decimaltobinary (n);
        cout << answer << endl ;
        return 0 ; 
    }