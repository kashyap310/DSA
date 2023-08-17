#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k = k % n; //ensure array within range
        reverseArray(nums,0,n-1);
        reverseArray(nums,0,k-1);
        reverseArray(nums,k,n-1);
    }

    void reverseArray(vector<int>& nums , int start,int end){
        while (start<end){
            int temp;
            temp = nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;end--;
        }
     
        
    }

    
};
int main(){
    Solution s;
    vector<int> nums={1,2,3,4,5,6,7};
    vector<int> abc;
    s.rotate(nums,3);
    for (auto ele:nums){
        cout<<ele<<" ";
    }cout<<endl;
    return 0;
}