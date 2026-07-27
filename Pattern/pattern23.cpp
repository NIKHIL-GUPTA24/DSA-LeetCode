/*   1234554321
     1234**4321
     123****321 
     12******21
     1********1     */

     #include<iostream>
     using namespace std;
     int main (){
        
        int n;
        cout<<"Enter a no :";
        cin>>n;

        int i=1;
        while(i<=n){
             
            int j=1;
            while (j<=n-i+1){
                cout<<j;
                j=j+1;
            }
            int k=1;
            while (k < i ){
                cout<<"*";
                k =k +1;
            }
            int l=1;
            while(l < i){
                cout<<"*";
                l = l + 1;
            }
            int m = n - i + 1 ;
            while (m > 0){
                cout<<m;
                m = m - 1 ;
            }
            i = i + 1;
            cout<<endl;
        }
     }