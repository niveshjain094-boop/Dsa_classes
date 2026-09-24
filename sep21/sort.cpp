#include <iostream>
using namespace std;

// void swap (int& i  ,int & j ){
// int temp=0;
// temp=i;

// i=j;
// j=temp;

// }
int main(){

int n ;
cout<<"Enter the fields of array :";
cin>> n;

int arr[n];

for(int i =0 ; i<n ; i++){

    cin>>arr[i];
}

for(int j=0 ; j<n  ; j++){
      for(int i=0 ; i<n ; i++) {
               for(int j=0 ;j<n ;j++){

                    if(i==j) continue;  
                if(arr[i]<arr[j]){
                    swap(arr[i],arr[j]);
                            break;
         }

      }
   }
}
cout<<" sorted array "<<endl;

for(int i =0 ; i<n ; i++){

    cout<< arr[i]<<",";
}
return 0;

}