#include <iostream>
using namespace std;
int main(){
int n=0;
int m;
cout<<"enter the value";
cin>>m;


    for(int i=0;i<m;i++){

        
        for (int j=m;j>i;j--){

            cout<<" ";
        }

        for(int k=0;k<n+1;k++){
         cout<<"*";
             
        }
        cout<<endl;
        n++;
        n++;
    }
   //m--;

    for(int i=0;i<m;i++){

        
        for (int j=0;j<i;j++){

            cout<<" ";
        }

        for(int k=0;k<m-1;k++){
         cout<<"*";
             
        }
        m--;
       // m--;
        cout<<endl;
        
    }

    
    return 0;

}