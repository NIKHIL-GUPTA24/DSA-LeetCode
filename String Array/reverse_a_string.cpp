#include<iostream>
#include<cstring>
using namespace std;
void reverse(char ch[]){
    int i=0;
    int n=strlen(ch);
    int j=n-1;

    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    cout<<ch;

}
int main(){
    char ch[100];
    cin.getline(ch,100);
    cout<<ch<<endl;;

    reverse(ch);
    
  return 0;
}