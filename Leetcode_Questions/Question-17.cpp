// leetcode problem - 283
// Move Zeroes
// Two pointer approach
// Two Pointer approach is Best approach for this Problem:
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0;
        int j = 0;
        while (j < n)
        {
            if (nums[j] != 0)
            {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};
int main()
{
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};
    s.moveZeroes(nums);
    for (int n : nums)
    {
        cout << n << " ";
    }
    return 0;
}