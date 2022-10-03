// https://leetcode.cn/problems/spiral-matrix-ii/
#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief try to use the google principle of c++
 * when filling the array, use 'left-closed and right-open interval'
 * detail in https://www.programmercarl.com/0059.%E8%9E%BA%E6%97%8B%E7%9F%A9%E9%98%B5II.html#%E6%80%9D%E8%B7%AF
 */
class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int loop = n / 2;              // number of rotations, if n=3, loop=1
        int mid_element_index = n / 2; // the mid element, if n=3, mid_element_index=(1,1)
        int start_x = 0;               // the begin index
        int start_y = 0;
        int offset = 1; // every rotation's length=n-offset
        int ans = 1;    // element
        while (loop--)
        {
            int i = start_x;
            int j = start_y;

            // top line
            for (j = start_y; j < n - offset; j++)
            {
                res[start_x][j] = ans++;
            }

            // right line
            for (i = start_x; i < n - offset; i++)
            {
                res[i][j] = ans++;
            }

            // bottom line
            for (; j > start_y; j--)
            {
                res[i][j] = ans++;
            }

            // left line
            for (; i > start_x; i--)
            {
                res[i][j] = ans++;
            }

            start_x++;
            start_y++;
            offset++;
        }
        if (n % 2 == 1)
        {
            res[mid_element_index][mid_element_index] = ans;
        }
        return res;
    }
};