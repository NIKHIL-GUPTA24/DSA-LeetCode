#include<iostream>
using namespace std ;
float area(int a ){
    float circle = 3.14 *a*a ;
    return circle ;

}
int main (){
    int a ;
    cout<< "Enter radius of circle : "<< endl ;
    cin >> a ;
    float r = area (a);
    cout << "Area of circle is " << r << endl ; 
}