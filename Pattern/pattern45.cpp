/*      1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1   */
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int num=1;
        for(int k=1;k<=i;k++){
            cout<<num<<" ";
            num=num+1;
        }
        int no=i-1;
        for(int l=1;l<i;l++){
            cout<<no<<" ";
            no=no-1;
        }
        cout<< endl;
        }
    return 0;
}