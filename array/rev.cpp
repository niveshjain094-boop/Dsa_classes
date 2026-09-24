#include <iostream> 
using namespace std;
int main(){
    int n;
cout<<"enter the field of array";
cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
  //  int half=n/2;
    cout<<"original array ";
     for(int i=0 ;i<n ; i++){

        cout<<arr[i]<<",";
    }
 cout<<endl;

    int rev=n-1;
    int i=0;
     int temp=0;
   // for(int i=0 ;i<n ; i++){
while(i<=rev){
        
    temp= arr[rev];
        arr[rev]=arr[i];
        arr[i]=temp;
        rev--;
        i++;
           //half--;
    }
cout<<"reversed array";
    for(int i=0 ;i<n ; i++){

        cout<<arr[i]<<",";
    }
}