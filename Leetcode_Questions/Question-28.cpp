// Leetcode Problem 153:
// Search the minimum value in rotated sorted array:
// Binary search approach:
// Time complexity O(logn):
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        int start = 0;
        int end = n - 1;

        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] > nums[end])
            { // minimum in right half
                start = mid + 1;
            }
            else if (nums[mid] < nums[end])
            { // minimum in left half
                end = mid;
            }
            else // when both are equal
            {
                end--;
            }
        }
        return nums[start];
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {2, 2, 2, 0, 2};
    int ans = sol.findMin(nums);
    cout << "The Minimum value is: " << ans << endl;
    return 0;
}