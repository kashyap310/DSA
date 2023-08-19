#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*The majority element is the element 
        that appears more than ⌊n / 2⌋ times. You may assume that 
        the majority element always exists in the array.*/
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

int main(){
    Solution s;
    vector<int> nums={2,2,1,1,1,2,2};
    cout<<s.majorityElement(nums)<<endl;
    return 0;
}