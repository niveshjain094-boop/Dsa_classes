// best time to buy and sell and print MAX profit if exist
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int max_profit( vector<int> &nums){
    int max=0;
    for(int i=0 ; i<nums.size() ;i++){
        for(int j=i+1; j<nums.size() ; j++){
           if(nums[j]-nums[i]>0 && nums[j]-nums[i]>max)
           max=nums[j]-nums[i];
        }
    }
    return max;


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
    int x=max_profit(nums);
    cout<< "Max profit is "<< x;
    return 0;

    
    
}