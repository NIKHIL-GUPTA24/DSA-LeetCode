/*    * 
    * * *
  * * * * *
    * * *
      *       */
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=(n-1)/2;i++){
        for(int j=1;j<=(n-i)/2;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
        cout<< endl;
    }
    for(int k=1;k<=n;k++){
        cout<<"* ";
    }
    cout<< endl;
    for(int l=1;l<=(n-1)/2;l++){
        for(int m=1;m<=l;m++){
            cout<<"  ";
        }
        for(int p=1;p<=n-2*l;p++){
            cout<<"* ";
        }
        cout<< endl;
    }
    return 0;
}