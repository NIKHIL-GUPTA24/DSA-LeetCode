#include <iostream>
using namespace std ;

    bool check (int num) {
        if (num <= 1){
            return false ;
        }
        for (int i = 2 ; i < num ; i++){
            if (num % i == 0){
                return false ;
            }
        }
        return true ;
}
int main (){
    int num = 8 ;

    bool answer = check (num);
    if (answer){
        cout << "prime no ";
    }
    else {
        cout << " Not a prime no ";
    }
   
    return 0;
 }