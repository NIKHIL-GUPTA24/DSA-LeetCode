#include<iostream>
using namespace std;
int findsqrt(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int target=n;
    int ans=-1;

    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        if(mid*mid>target){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the no"<<endl;
    cin>>n;
    int ans=findsqrt(n);

    int precision;
    cout<<"Enter the precision:"<<endl;
    cin>>precision;
    
    double step=0.1;
    double final_ans=ans;

    for(int i=0 ; i< precision ; i++ ){
        for ( double j=final_ans ; j*j <= n ; j=j+step ){
            final_ans=j;
        }
        step=step/10;
    }
    cout<<"The Final ans is : "<<final_ans<<endl;
    return 0;
}