#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char name[50];
    cout<<"Enter String"<<endl;
    cin>>name;
    char ans[1000];
    int top = -1; 
    for(int i = 0; name[i] != '\0'; i++) {
        if(top >= 0 && ans[top] == name[i]) {
            top--;   // pop
        } 
        else {
            top++;
            ans[top] = name[i]; // push
        }
    }
    ans[top + 1] = '\0';
    cout << ans;
  return 0;
}