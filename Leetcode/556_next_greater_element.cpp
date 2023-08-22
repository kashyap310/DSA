#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int nextGreaterElement(int n)
    {
        vector<int> digits = split(n);
        int i = digits.size() - 2;
        
        while (i >= 0 && digits[i] >= digits[i + 1])
        {
            i--;
        }
        
        if (i == -1)
        {
            return -1;
        }
        
        int j = digits.size() - 1;
        while (j >= 0 && digits[j] <= digits[i])
        {   
            j--;
        }
        
        swap(digits[i], digits[j]);
        reverse(digits.begin() + i + 1, digits.end());
        
        long long result = merge(digits);
        
        if (result > std::numeric_limits<int>::max())
        {
            return -1;
        }
        
        return static_cast<int>(result);
    }

    vector<int> split(int n)
    {
        vector<int> digits;
        while (n > 0)
        {
            int digit = n % 10; 
            digits.push_back(digit);
            n /= 10; 
        }
        reverse(digits.begin(), digits.end());
        return digits;
    }

    long long merge(vector<int> digits)
    {
        long long reconstructedNumber = 0;

        for (int digit : digits)
        {
            reconstructedNumber = reconstructedNumber * 10 + digit;
        }
        
        return reconstructedNumber;
    }
};

int main()
{
    Solution solution;
    int result = solution.nextGreaterElement(12443322);
    if (result != -1)
    {
        std::cout << "Next greater element: " << result << std::endl;
    }
    else
    {
        std::cout << "No greater element found." << std::endl;
    }

    return 0;
}
