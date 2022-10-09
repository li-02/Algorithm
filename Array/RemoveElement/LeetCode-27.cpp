// https://leetcode.cn/problems/remove-element/
#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief 主要思路就是用两个指针,一个快指针和一个慢指针
 * 快指针来寻找新数组的元素,也就是不等于val的元素
 * 慢指针更新新数组的下标
 * use two ponits, one is used to find new array's element, the other is used to update the index of new array
 */
class solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int slowpoint = 0;
        for (int fastpoint = 0; fastpoint < nums.size(); fastpoint++)
        {
            if (nums[fastpoint] != val)
            {
                nums[slowpoint] = nums[fastpoint];
                slowpoint++;
            }
        }
        return slowpoint;
    }
};