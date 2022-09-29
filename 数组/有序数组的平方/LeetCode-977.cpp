// https://leetcode.cn/problems/squares-of-a-sorted-array/

#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief the array is ordered, after squaring, the maximum on both sides
 * so we can use double point i and j, also need a auxiliary array to store result
 * i at beginning, j at end
 */
class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int k = nums.size() - 1;
        vector<int> result(nums.size(), 0);
        for (int i = 0, j = nums.size() - 1; i <= j;)
        {
            if (nums[i] * nums[i] < nums[j] * nums[j])
            {
                result[k--] = nums[j] * nums[j];
                j--;
            }
            else
            {
                result[k--] = nums[i] * nums[i];
                i++;
            }
        }
        return result;
    }
};