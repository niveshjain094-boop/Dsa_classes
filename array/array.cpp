#include <iostream>
using namespace std;
int main(){

    int arr[5]={1,1,1,3,5};

    int min= arr[0];
    for(int i =1; i<5 ; i++){

        if(arr[i]<min){

            min=arr[i];
        }
    }
cout<<min<<endl;
    
int max=arr[0];

for(int i=1; i<5 ;i++){

    if(arr[i]>max){


        max=arr[i];
    }
}
cout<<max<<endl;
int sum=0;
for(int i=0 ; i<5 ; i++){
    sum+=arr[i];

}
cout<<"the sum is"<<sum;
return 0;
}