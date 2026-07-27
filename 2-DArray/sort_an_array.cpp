#include<iostream>
#include<vector>
using namespace std;
vector<int> find (vector<int> arr,int l,int m,int h){
    while (m<=h){
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            l++,m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[l],arr[h]);
            h--;
        }
    }
        return arr;
}
int main(){
    cout<<"The Given Array:"<<endl;
    vector <int> arr = {2,0,2,1,1,0};
    int l=0,m=0,h=arr.size()-1;
    for (int i =0 ; i < arr.size() ; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
   vector<int> brr=find(arr , l ,m ,h );
   for (int i=0;i<brr.size();i++){
            cout<<brr[i]<< " ";
        }
        cout<<endl;
}