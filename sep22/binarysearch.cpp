#include <iostream>
using namespace std;
int main()
{

int n;
cout<<"Enter the fields of array"<<endl;
cin>>n;
int arr[n];
cout<< "enter the target";
int target;
cin>>target;

for(int i=0 ; i<n ; i++){

    cin>>arr[i];
}

int low =0;
int high = n-1;

int mid= low +(high-low)/2;
bool found = false ;
while( high >= low){

    mid= low+(high-low)/2;
    if(target==arr[mid]){
          found=true;
       // cout<<"value found at"<<mid;
        break;
    }
    else if(arr[mid]<target){
        low=mid+1;
        
    }
    else{
        high=mid-1;
    }
    //cout<<"value not found ";

}
if(found==true) cout<<"value was found";

else cout<<"value was not found";
return 0;
}