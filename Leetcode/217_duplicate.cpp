#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &nums)
{   
    int i=0;
    unordered_set<int> val{};
    while(i<nums.size()){
        if (val.find(nums[i]) == val.end())
        {val.insert(nums[i]);i++;}
        else
        {return true;}     
    }
    return false;
}
    int main()
    {
        vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
        cout << containsDuplicate(nums) << endl;
        return 0;
    }