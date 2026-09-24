#include <iostream>
using namespace std;
int main(){


int arr[5];
for(int i =0 ; i <5 ; i++){

    cin>>arr[i];
}
cout<<endl;
for (int i=0 ; i<5; i++){

      cout<<arr[i]<<",";
}   

// chnage only even index values
for(int i =0 ; i<5; i+=2){
    arr[i]=0;
}
cout <<"after updation";
for (int i =0 ; i<5 ; i++){
    cout<< arr[i];
}

return 0;
}