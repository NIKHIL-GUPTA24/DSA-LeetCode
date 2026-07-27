#include<iostream>
using namespace std ;

int kthbit (int n ,int k){
    int mask = 1 << k ;
    int solution = n | mask ;
    return solution ; 
}

int main (){
    int n;
    cout<< "enter binary :" << endl ;
    cin >> n ;
    int k;
    cout<<"Enter kthbit :"<< endl;
    cin >> k ;
    int answer = kthbit(n,k);
    cout << answer ;
    return answer ;

}