
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    // vector<int>
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> map;
        vector<int> sol = {};
        for (int i = 0; i < nums.size(); i++)
        {
            if (map.find(nums[i]) == map.end())
            { // num as key not found
                // cout << "not found " << nums[i] << endl;
                map[nums[i]] = 1;
            }
            else
            {
                // cout << "increse count of " << nums[i] << endl;
                map.at(nums[i]) += 1; // increse count of key
            }
        }

        for (int i = nums.size(); i > 0; i--)
        {
            if (sol.size() == k)
            {
                return sol;
            }
            for(auto k:map){
                if(k.second==i){
                   
                    sol.push_back(k.first);

                }
            }
        }
        return sol;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1,12,3,4,5,6,4,4,4,4,4,3,3,3,1,1,1};//{1, 1, 1, 2, 2, 3};
    int k = 3;
    //s.topKFrequent(nums, k);
    
    vector <int>ans=s.topKFrequent(nums,k);
    for(auto x: ans){
        cout<<x<<endl;
    }
    return 0;
}