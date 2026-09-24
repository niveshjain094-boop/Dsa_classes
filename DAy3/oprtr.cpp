#include <iostream>
using namespace std;
int main(){
int a,b;
cout<< "Enter the value of a" <<endl;
cin>>a;
cout<< "Enter the value of b" << endl;
cin>>b;
cout<< "Enter your choice"<< endl;
char choice;
cin>>choice;
switch(choice){
    case '+':
    cout<<a+b<<endl;
    break;
    case '*':
    cout<<a*b<<endl;
    break;
     case '/':
    cout<<"quotient oF value is :"<<a/b<<endl;
    break;
    default :
    cout<<"Invalid Operation"<<endl;
}

return 0;
}