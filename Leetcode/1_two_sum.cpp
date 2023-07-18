#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result; 
        size_t size = nums.size();
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) { // Start the inner loop from i + 1
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result; // Early return since we only need one valid pair
                }
            }
        }
        return result; // Return an empty vector if no pair is found
    }
};

int main(){
    vector<int> nums = {3,3};
    int target = 6;
    Solution obj;
    vector<int> result = obj.twoSum(nums, target);

    // Print the elements of the result vector
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
