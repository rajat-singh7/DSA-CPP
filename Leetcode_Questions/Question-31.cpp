// Leetcode problem 35:
// Search insert position:
// Binary search approach:
// time complexity O(logn):
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return start;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {1, 3, 5, 7};
    int target = 2;
    int ans = s.searchInsert(nums, target);
    cout << "Answer is: " << ans << endl;
    return 0;
}