#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
int main()
{
    Solution s;
    vector<int> nums ={ -4,-1,0,3,10};
    s.sortedSquares(nums);
    for(auto ele:nums){
        cout<<ele<<" ";
    }cout<<endl;
    return 0;
}