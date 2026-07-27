#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cin.getline(ch,100);

    int i=0;
    while(ch[i]!='\0'){
        i++;
    }
    cout<<i;

  return 0;
}