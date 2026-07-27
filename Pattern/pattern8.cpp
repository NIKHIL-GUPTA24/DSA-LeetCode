/*  1
    23
    456
    78910   */

    #include<iostream>
    using namespace std;

    int main (){
        int counting=1;
        int n;
        cout<<"Enter a no :";
        cin >> n;

        int i=1;
        while(i<=n){
            int j=1;
            while(j<=i){
                cout << counting << " ";
                counting = counting + 1;
                j=j+1;
            }
            cout<<endl;
            i=i+1;
        }

    }