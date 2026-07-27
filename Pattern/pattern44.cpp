 /*       1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int num=1;
        for(int k=1;k<=2*i-1;k++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<< endl;
        }
    return 0;
}