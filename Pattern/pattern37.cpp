/*      1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5    */
#include<iostream>
using namespace std;
    int main (){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        int num=i;
        for(int k=1;k<=i;k++){
            cout<<num ;
            num = num + 1 ;
        }
        int z=2*i-2;
        for(int l=1;l<i;l++){
            cout<<z;
            z=z-1;
        }
        cout<<endl;
    }
    return 0;
}
     