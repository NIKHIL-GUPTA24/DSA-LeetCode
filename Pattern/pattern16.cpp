/*  A
    BC
    DEF
    GHIJ    */

    #include<iostream>
    using namespace std;

    int main (){
        char ch =65;

        int n;
        cout<<"Enter a no :";
        cin >> n;

        int i=1;
        while(i<=n){
            int j=0;
            while(j < i){
                
                cout << ch << " ";
                ch = ch + 1;
                j=j+1;
            }
            cout<<endl;
            
            i=i+1;
        }

    }