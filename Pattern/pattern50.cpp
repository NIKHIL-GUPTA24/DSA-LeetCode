/*                0
                9 0 9
              8 9 0 9 8
            7 8 9 0 9 8 7
          6 7 8 9 0 9 8 7 6
        5 6 7 8 9 0 9 8 7 6 5
      4 5 6 7 8 9 0 9 8 7 6 5 4
    3 4 5 6 7 8 9 0 9 8 7 6 5 4 3
  2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2
1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1     */
#include<iostream>
using namespace std;
int main(){
  int n=10;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
      cout<<"  ";
    }
    if(i==1){
      cout<<0<<" " ;
    }
    else{
      int num=n-i+1;
      for(int k=1;k<i;k++){
        cout<<num <<" ";
        num=num+1;
      }
      cout<<0 <<" ";
      int no=n-1;
      for(int l=1;l<i;l++){
        cout<<no<<" ";
        no=no-1;
      }
    }
    cout<<endl;
  }
  return 0;
}