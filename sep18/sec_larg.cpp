#include <iostream>
using namespace std;
int main()
{
    int n ;
   
  cout<<"Enter fields of array "<<endl;
  cin>>n;
 int arr[n];
  for(int i=0 ; i<n ;i++){
       cin>>arr[i];
  }
    

    int max=arr[0];
    int sec=-1;
    //int temp=0;

    for(int i=1 ; i<n ; i++)
    {

            if(max<arr[i]) 
            {
               sec=max;
                max=arr[i];
                

            }
            
           else if(sec!=max && arr[i]>sec) {

                sec=arr[i];
            }
    }
    cout<<"second largest"<<sec<<endl;
    cout<<"maximum "<<max;
}