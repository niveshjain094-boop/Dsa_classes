#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int unique( string given){
    int tmp=0;

    for(int i=0 ; i<given.length() ; i++){

        for(int j=0 ; j<given.length();j++ ){
            
            
           
            if(given[i]==given[j]) 
            tmp++;

        }
        if(tmp==1) 
        return i;
        else tmp =0;
    }
    return -1;

    
};

int main(){

    string given;
    cout<<"enter string ";
    cin>>given;
    int x = unique(given);
    cout<< x;
    return 0;

    
    
}