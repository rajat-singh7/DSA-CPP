// Leetcode Problem 33:
// Search in rotated sorted array:
// Binary search approach:
// Time complexity O(logn):
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &arr, int target)
    {
        int n = arr.size();
        int start = 0;
        int end = n - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
            {
                return mid;
            }
            if (arr[start] <= arr[mid])
            { // left side sorted
                if (arr[start] <= target && target <= arr[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
            else
            { // right side sorted
                if (arr[mid] <= target && target <= arr[end])
                {
                    start = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int ans = sol.search(arr, target);
    cout << "The value of index of 0: " << ans << endl;
    return 0;
}