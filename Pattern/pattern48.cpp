/* 5 4 3 2 *
   5 4 3 * 1
   5 4 * 2 1
   5 * 3 2 1
   * 4 3 2 1   */
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        int num=n;
        for(int j=1;j<=n-i;j++){
            cout<<num<<" ";
            num=num-1;
        }
        cout<<"* ";
        int z=i-1;
        for(int k=1;k<i;k++){
            cout<<z<<" ";
            z=z-1;
        }
        cout<< endl;
    }
    return 0;
}