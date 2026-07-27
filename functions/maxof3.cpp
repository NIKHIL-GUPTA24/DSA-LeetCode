#include<iostream>
using namespace std;
int max (int x , int y, int z){
    
    if(x>y){
        if (x>z){
            return x;
        }
        else {
            return y;
        }
    }
    else {
        return z;
    }
}

int main (){
    int a;
    cout<<"Enter a number 1 :" << endl;
    cin >> a ;
    int b;
    cout<<"Enter a number 2 :" << endl;
    cin >> b ;
    int c;
    cout<<"Enter a number 3 :" << endl;
    cin >> c ;
    int result = max ( a , b , c );
    cout << result ;
    return 0;
}
