/*      1
      2 0 2
    3 0 0 0 3
  4 0 0 0 0 0 4
5 0 0 0 0 0 0 0 5   */
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        if(i==1){
            cout<<1;
        }
        else{
        cout<<i<<" ";
        int z=i-1;
        for(int l=1;l<=2*z-1;l++){
            cout<<0<<" ";
        }
        cout<<i;
    }
    
        cout<< endl;
        }
    return 0;
}