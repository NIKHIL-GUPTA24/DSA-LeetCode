#include<iostream>
#include <math.h>
using namespace std ;

        int binary_to_decimal (int n) {
            int decimal = 0 ;
            for (int i=0 ; n ; i++){
                int bit = n & 1 ;
                decimal = bit * pow (2,i) + decimal ;
                n = n >> 1;
            }
        return decimal ;
    }

    int main (){
        string n ;
        cout << "Enter a no :" << endl;
        cin >> n ;
        int ans = binary_to_decimal(n);
        cout << ans << endl ;
        return 0 ;
    }