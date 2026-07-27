/*   ABC
     DEF
     GHI   */

     #include<iostream>
     using namespace std;
     int main (){
        char ch =65;
          
         int n;
         cout<<"Enter a no :";
         cin >>n;
     
         int i=1;

         while(i<=n){
            
             int j=1;
             while (j<=n){
                cout<< ch << " ";
                ch=ch+1;
                
                 j=j+1;
             }

             cout<< endl;
             i=i+1;
            
         }
     
     }