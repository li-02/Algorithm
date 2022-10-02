// https://leetcode.cn/problems/minimum-size-subarray-sum/
#include <iostream>
#include <vector>

using namespace std;
/**
 * @brief https://www.programmercarl.com/0209.%E9%95%BF%E5%BA%A6%E6%9C%80%E5%B0%8F%E7%9A%84%E5%AD%90%E6%95%B0%E7%BB%84.html#%E6%BB%91%E5%8A%A8%E7%AA%97%E5%8F%A3
 * 
 */
class solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int result = INT32_MAX;
        int sum = 0;
        int sub_length = 0;
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            sum += nums[j];
            while (sum >= target)
            {
                sub_length = (j - i + 1);
                result = sub_length < result ? sub_length : result;
                sum -= nums[i++];
            }
        }
        return result == INT32_MAX ? 0 : result;
    }
};