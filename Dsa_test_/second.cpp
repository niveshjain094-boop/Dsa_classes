#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pairs( int target, vector<int> &nums){
 
    int find =0;
    for(int i=0 ; i<nums.size()-1 ; i++){
       find = target-nums[i];
       if(find>=0){
        for(int j=i+1; j<nums.size() ;j++){
            if(nums[j]==find)
            return{i,j};
         }
      }
    }
    return {0};
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
    
    vector<int> ans;
    ans= pairs(5,nums);
    if(ans.size()==2)
    cout<<"pairs are "<<ans[0]<<" "<<ans[1];
else 
cout<<"NO pairs found";
  return 0;
}