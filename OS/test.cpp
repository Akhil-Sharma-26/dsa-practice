#include <bits/stdc++.h>
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        int count = 1, a, b;
        std::sort(nums.begin(), nums.begin() + nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i];
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (count >= 2)
            {
                return true;
            }
            bool xx = std::binary_search(nums.begin() + i + 1, nums.begin() + nums.size(), nums[i]);
            if (xx)
            {
                count++;
                return true;
            }
        }
        return false;
    }
};