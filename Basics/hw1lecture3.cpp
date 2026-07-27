#include<iostream>
using namespace std ; 

  int main (){
    char ch ;
    cout << " Enter a character :" << endl ;
    cin >> ch  ;
    if  ( 'a'<=ch && ch<='z'){
        cout << " this  is lower case "<< endl;
    }
    else if('A' <= ch && ch <= 'Z' ){
        cout << " this is upper case" << endl ;
    }
    else if ('0' <= ch && ch <= '9'){
        cout << "this is numeric " << endl ;
    }
}