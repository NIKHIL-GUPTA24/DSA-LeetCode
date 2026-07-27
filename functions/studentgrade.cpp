#include<iostream>
using namespace std ;
void marks (int a){
    if (a>=90){
        cout<< "A"<< endl ;
    }
    else if (90>a && a>=80){
        cout << "B" << endl ;

    }
    else if (80 >a && a>=70){
        cout <<"C" << endl ;
    }

    else {
            cout << "D"<< endl ;
        }
       return ; 
    }
 int main (){
    int a=75;
    marks (a);
    return 0;
 }