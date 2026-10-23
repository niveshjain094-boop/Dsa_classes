#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
bool repeated( vector<int> &nums){
    
    unordered_map <int,int> map;
    for(int i=0 ; i<nums.size(); i++){
        map[nums[i]]++;
    }

    for(auto x:map){
        if(x.second >=2){
            cout<<"True";
            return 1;
        }
    }
    cout<<"False";
    return 0;
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
    repeated(nums);
    return 0;

    
    
}