#include <iostream>
using namespace std;

int pattern(){

    for(int i=0 ; i<5 ; i++){

        for (int j=0; j<i; j++){
              cout<<' ';
        }
        cout<<'*';
    }
    
    for(int i=0 ; i<5 ; i++){

        for (int j=0; j<i; j++){

            cout<<'*';
        }
        cout<<endl;
    }
    for(int i=5 ; i>0 ; i--){

        for (int j=0; j<i; j++){

            cout<<'*';
        }
        cout<<endl;
    }

    int pattern2(){

    int a=5;
      for(int i=0 ; i<a ; a--){
            cout<<' '<<;
        for (int j=0; j<i; j++){

            cout<<' '<<;
        }
        cout<<'*';
    }

    }
    

}
int main (){
    pattern();
}