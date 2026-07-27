#include<iostream>
#include<cstring>
using namespace std;
void convert_into_upper(char name[]){
    int n=strlen(name);
    for(int i=0 ; i<n ; i++ ){

        if(name[i]>='a' and name[i]<='z' ){
        name[i]=name[i]-'a'+'A';
      }
    }
}

int main(){
    char name[]="NikhiL";
    convert_into_upper(name);
    cout<<name;
  return 0;
}