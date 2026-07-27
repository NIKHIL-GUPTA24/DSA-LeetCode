#include<iostream>
#include<cstring>
using namespace std;
bool ispalindrome(char ch[]){
    int i=0;
    int j=strlen(ch)-1;
    while(i<j){
        if(ch[i]!=ch[j]) return false;
        i++;
        j--;
    }
    return true;

}
int main(){
    char ch[100];
    cin.getline(ch,100);

    if( ispalindrome(ch) ) cout<<"true";
    else cout<<"false";
  return 0;
}