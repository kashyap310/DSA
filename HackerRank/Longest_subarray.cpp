#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarray(vector<int>& nums) {
    int maxLength = 0;
    int left = 0, right = 0;
    unordered_map<int, int> freqMap;

    while (right < nums.size()) {
        freqMap[nums[right]]++;

        while (freqMap.size() > 2 || (freqMap.size() == 2 && abs(freqMap.begin()->first - next(freqMap.begin())->first) > 1)) {
            freqMap[nums[left]]--;
            if (freqMap[nums[left]] == 0) {
                freqMap.erase(nums[left]);
            }
            left++;
        }

        maxLength = max(maxLength, right - left + 1);
        right++;
    }

    return maxLength;
}

int main() {
    vector<int> nums = {1, 1, 1, 3, 3, 2, 2};
    int result = longestSubarray(nums);
    cout << result << endl;  // Output should be 4

    return 0;
}
