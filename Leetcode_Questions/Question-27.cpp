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
    int findMin(vector<int> &arr)
    {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] > arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
        }
        return arr[start];
    }
};
int main()
{
    Solution sol;
    vector<int> arr = {4,5,6,7,0,1,2};
    int ans = sol.findMin(arr);
    cout << "The minimum value is: " << ans << endl;
    return 0;
}