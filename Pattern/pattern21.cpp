/*  ****
     ***
      **
       *      */
   #include<iostream>
   using namespace std;
   int main (){
       int n;
       cout<<"Enter a no :";
       cin >> n;

       int i=1;
       while (i<=n){

        int space=1;
           while(space < i){
            cout<<" ";
            space = space + 1 ;

           }

           int j=0;
           while(j<=n-i){
               cout<<"*";
               j=j+1;
           }
           
           i=i+1;
           cout<<endl;
       }
   }