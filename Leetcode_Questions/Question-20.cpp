// Leetcode Problem 162:
// Find peak Elements:
// Binary Search approach
// Time Complexity = O(logn)
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;

        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] < arr[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
        return start;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {1, 2, 3, 1};
    int ans = s.peakIndexInMountainArray(arr);
    cout << "Peak Element in array at Index: " << ans << endl;
    return 0;
}