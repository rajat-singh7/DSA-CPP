// Leetcode Problem 852:
// Peak index in an mountain array:
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
    vector<int> arr = {0, 1, 0};
    int ans = s.peakIndexInMountainArray(arr);
    cout << "Peak index is: " << ans << endl;
    return 0;
}