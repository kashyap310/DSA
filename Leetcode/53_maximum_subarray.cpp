#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    //Kadane's Algorithm:
    int maxSubArray(vector<int>& nums) {
        int current_sum = nums[0], max_sum = nums[0];
       for(int i=1;i<nums.size();i++){
           if(current_sum<0){
            current_sum = nums[i];
           }else{
        current_sum = current_sum+nums[i];}
        
        max_sum = max(current_sum,max_sum);
    }return max_sum;
    }     
    
};
int main()
{
    Solution s;
    vector<int> nums ={-2,1};
    cout<<s.maxSubArray(nums)<<endl;
    // for(auto ele:nums){
    //     cout<<ele<<" ";
    // }cout<<endl;
    return 0;
}

