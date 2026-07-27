#include<iostream>
using namespace std;
int main(){
  int X;
  cin>>X;
  int Y;
  cin>>Y;
  
  if((X/Y)==(16/9)){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
}
//ques2
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  char ch;
  cin>>ch;
  
  int index=ch-'A';
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    if(s[index]=='o'){
      cout<<"Yes"<<endl;
    }
  }
  cout<<"No"<<endl;
  
}