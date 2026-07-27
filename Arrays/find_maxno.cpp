#include<iostream>
#include<limits.h>
using namespace std ;
int main (){
    int arr[] = {1,7 , 4 , 9 ,2 , 5 , 13 , 18, 0};
    int size = 9;
    int maxNum = INT_MIN ;
    for (int i=0;i<size;i++){
        if( arr[i] >maxNum ){
            maxNum = arr[i];
            
        }
    }
    cout << maxNum ;
    return 0 ;

}