#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int second_largest( vector<int> &nums){
    
    int max = INT_MIN;

    for(int i=0 ; i<nums.size() ; i++){
       if(nums[i]>max)
       max=nums[i];
    }
    int second = INT_MIN;
    for(int i=0; i<nums.size() ;i++){
        if(second<nums[i] && nums[i]<max){
          second =nums[i];
        }
    }
    if(second != INT_MIN)
    cout<<"SECOND LARGEST IS "<<second;
else
cout<<"not found "<< "-1 ";


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
    second_largest(nums);
    return 0;

    
    
}