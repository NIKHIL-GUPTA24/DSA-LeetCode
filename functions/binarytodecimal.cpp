#include<iostream>
#include <math.h>
using namespace std ;

        int binarytodecimal (int n){
            int decimal =0 ;
            for (int i=0 ; n>0; i++){
                int bit = n % 10;
                decimal = bit * pow ( 2,i) + decimal ;
                n=n/10;
            }
        return decimal ;
    }

    int main (){
        int n ;
        cout << "Enter a no :" << endl;
        cin >> n ;
        int ans = binarytodecimal(n);
        cout << ans << endl ;
        return 0 ;
    }