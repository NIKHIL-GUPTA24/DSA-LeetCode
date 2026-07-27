/*  * * * * * 
    *       *
    *       *
    *       *
    * * * * *      */
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        cout<<"* ";
    }
    cout<<endl;
    for(int j=1;j<=n-2;j++){
        cout<<"* ";
        for(int m=1;m<=n-2;m++){
            cout<<"  ";
        }
        cout<<"* ";
        cout<<endl;
    }
    for(int k=1;k<=n;k++){
        cout<<"* ";
    }
}