#include<iostream>
using namespace std;
int main(){
    int n=1234;
    int sum=0;
    while(n>0){
        int j=n%10;
        sum=sum+j;
        n=n/10;
    }
    cout<<sum;
}