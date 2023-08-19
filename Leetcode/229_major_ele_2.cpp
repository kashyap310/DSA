#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int countMajority = nums.size()/3;
        unordered_set<int> set;
        vector<int> output;
        for(auto num : nums){
            int count = 0;
            for(auto element : nums){
                if(element == num){
                    count++;
                }
            }
            if(count > countMajority){
                set.insert(num);
            }
        }
        for(auto it = set.begin(); it != set.end(); it++){
            output.push_back(*it);
        }
        return output;
    }
};

int main(){
    Solution s;
    vector<int> nums={1,1,1,1,1,1,1,1,2,2,2,2};
    vector<int> ans=s.majorityElement(nums);
    for(auto ele:ans){
        cout<<ele<<" ";
    }cout<<endl;
    return 0;
}