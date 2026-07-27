/*        1
      2 2 2
    3 3 3 3 3
  4 4 4 4 4 4 4
5 5 5 5 5 5 5 5 5    */
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<num<<" ";
        }
        cout<< endl;
        num=num+1;
        }
    return 0;
}