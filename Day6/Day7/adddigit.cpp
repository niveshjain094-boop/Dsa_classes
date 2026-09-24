#include <iostream>
using namespace std;
int main(){

  int n ;
  cout<< "enter the number ";
  cin>>n;
   
  int sum,sum2,digit,digit2;

  while(n>0){
  digit=n%10;
  sum = sum+digit;
  n=n/10;
  
  } 
  while(sum/10>0){
    digit2=sum%10;
    sum2=sum2+digit2;
    sum=sum/10;
  }
 
    if(sum/10<0)
  {
    return sum;}
    else{
        return sum2;
    }
    
    
}
  

