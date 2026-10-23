#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int missing_number(vector<int> &nums){
int tmp=0;
 sort(nums.begin(),nums.end());
    for(int i=0 ;i<nums.size();i++){
        if(i!=nums[i]){
             return i;
        }
        tmp=i;
    }
    return tmp+1;
};

int main(){

    vector<int> nums;
    int k=0;
    cout<<"enter nums size ";
    cin>>k;
    int tmp=0;
    for(int i=0 ; i<k ;i++){
     cin>>tmp;
     nums.push_back(tmp);
    }

    int x= missing_number(nums);
    cout<<"Missing number is "<<x;
  
}