#include <iostream>
#include <vector>
using namespace std;
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
            // Why e = mid beacuse here we calculate pivot index in an boundary:
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

// Leetcode Problem 724:
// Find pivot Index:
// Prefix Sum Approach:
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
    int arr[5] = {8, 10, 17, 1, 3};
    cout << "Pivot index is: " << getPivot(arr, 5) << endl;

    Solution s;
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int ans = s.pivotIndex(nums);
    cout << "The Pivot Index is: " << ans << endl;
    return 0;
}