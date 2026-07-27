/*   D 
     CD
     BCD
     ABCD   */

     #include <iostream>
     using namespace std;
     int main (){
        char ch = 65;
        int n;
        cout<< "Enter a no : ";
        cin>> n ;

        for (int i=1; i<=n; i++){
            for (int j=0; j < i ; j++){
                char value = ch - i + j +n;
                cout<< value << " ";
            }
            cout<<endl;
        }

     }