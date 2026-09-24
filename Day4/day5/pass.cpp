#include <iostream>
using namespace std;
int swap(int a,int b){
int temp;
     a = temp;
    b = a;
   temp = b;
   cout<< a <<endl;
   cout<< b <<endl;
}

int main(){

int a,b;
a=10;
b=3;
swap(a,b);
return 0;


}