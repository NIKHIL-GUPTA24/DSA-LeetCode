/*  *               * 
    * *           * *
    * * *       * * *
    * * * *   * * * *
    * * * * * * * * *     */
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        int z=(2*n-1)-2*i;
        for(int l=1;l<=z;l++){
            cout<<"  ";
        }
        if(z>0){
            for(int l=1;l<=i;l++){
            cout<<"* ";
            }
        }
        cout<< endl;
    }
    return 0;
}