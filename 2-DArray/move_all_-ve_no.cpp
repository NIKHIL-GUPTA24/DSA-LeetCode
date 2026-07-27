//input- 1|2|-3|4|-5|6
//output- -5|-3|4||1|6|2

#include<iostream>
#include<vector>
using namespace std;
vector<int>move(vector<int>arr,int l, int m){
    while(l<=m){
        if(arr[l]>=0){
            swap(arr[l],arr[m]);
            m--;
        }
        else{
            l++;
        }
    }
    return arr;
}
int main(){
    cout<<"The Given Array :"<<endl;
    vector<int>arr={2,1,-3,-5,4,6};
    int l=0 ; int m=arr.size()-1;
    for (int i =0 ; i < arr.size() ; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;

vector<int>brr=move(arr,l,m);
cout<<"The Output Array is:"<<endl;
for(int i=0;i<brr.size();i++){
    cout<<brr[i]<<" ";
 }
}