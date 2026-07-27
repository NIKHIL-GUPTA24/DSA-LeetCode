/*5 4 3 2 1
  5 4 3 2 1
  5 4 3 2 1
  5 4 3 2 1
  5 4 3 2 1  */

#include<iostream>
using namespace std;
int main(){
    int n=8;
    for(int i=1;i<=n;i++){
        int num=n;
        for(int j=1;j<=n;j++){
            cout<<num<<" ";
            num=num-1;
        }
        cout<<endl;
    }
    return 0;
}