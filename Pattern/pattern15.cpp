/*  A
    BB
    CCC
    DDDD    */

    #include<iostream>
    using namespace std;

    int main (){
        char ch =65;

        int n;
        cout<<"Enter a no :";
        cin >> n;

        int i=1;
        while(i<=n){
            int j=1;
            while(j<=i){
                cout << ch << " ";
                j=j+1;
            }
            cout<<endl;
            ch = ch + 1;
            i=i+1;
        }

    }