#include<iostream>
using namespace std;
void Transpose (int arr[][3],int r,int c , int transpose[][4]){
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            transpose[j][i]=arr[i][j];
        }
    }
}
int Printarray(int arr[][4],int r,int c){
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
}


int main (){
    int rows=4;
    int cols=3;
    cout<<"Input elements:" <<endl;
    int arr[4][3];
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The given matrix is :"<<endl;
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Printing array again:"<<endl;
    int transpose[3][4];
    Transpose(arr,rows , cols , transpose);
    cout<<"The transpose Matrix is :" <<endl;
    Printarray(transpose , rows , cols );

}