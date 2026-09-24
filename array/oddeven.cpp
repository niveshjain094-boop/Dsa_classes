#include <iostream>
using namespace std;
int main(){


    int arr[6]={-10,9,0,-3,0,3};
int pos=0;
int neg=0;
int zer=0;
    for(int i=0 ; i<6 ; i++){

        if(arr[i]<0){
            neg++;
        }
        else if(arr[i]>0){
            pos++;
        }
        else zer++;
    }
cout<<"positive numbers present " <<pos<<endl;
cout<<"negative numbers present  "<<neg<<endl;
cout<<"zeros present " <<zer<<endl;

int target = -3;
for(int i=0 ; i<6 ; i++){

    if(arr[i]==target){
        target = i;
    }

    
}

cout<<"the target is found at index "<<target;


return 0;
}