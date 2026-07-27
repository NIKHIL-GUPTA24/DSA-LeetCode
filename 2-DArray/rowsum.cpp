#include<iostream>
using namespace std;
int main(){
    cout<<"Input The Elements :";

    int arr[5][4];
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The given Matrix is:"<<endl;
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
            sum =  sum + arr[i][j];
        }
        cout<<sum;
        cout<< endl;
    }

}