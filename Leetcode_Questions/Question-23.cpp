// Leetcode Problem 724:
// Find pivot Index:
//Binary search Approach:
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int n = nums.size();
        int total_sum = 0;
        for (int &x : nums)
        {
            total_sum = total_sum + x;
        }
        int accumulative_sum = 0;
        for (int i = 0; i < n; i++)
        {
            int left_sum = accumulative_sum;
            int right_sum = total_sum - accumulative_sum - nums[i];
            if (left_sum == right_sum)
            {
                return i;
            }
            else
            {
                accumulative_sum += nums[i];
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int ans = s.pivotIndex(nums);
    cout << "The Pivot Index is: " << ans << endl;
    return 0;
}