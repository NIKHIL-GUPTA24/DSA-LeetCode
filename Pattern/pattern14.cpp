/*   ABC
     BCD
     CDE   */
     #include<iostream>
     using namespace std;
     int main (){
        char ch =65;
          
         int n;
         cout<<"Enter a no :";
         cin >>n;
     
         int i=1;
         while(i <= n){
            
             int j=0;
             while (j < n){
                char value=  ch + i+j-1;
                cout<< value << " ";
                 j=j+1;
             }

             cout<< endl;
             i=i+1;   
         }
     }