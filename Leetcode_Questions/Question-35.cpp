// Leetcode problem 4:
// Median of two sorted arrays:
// Approach-1
// Brute force
// Time complexity O(m+n)log(m+n):
// space complexity O(m+n):
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &A, vector<int> &B)
    {
        int m = A.size();
        int n = B.size();
        vector<int> merged(m + n);
        int i = 0, j = 0, k = 0;
        while (i < m && j < n)
        {
            if (A[i] < B[j])
            {
                merged[k++] = A[i++];
            }
            else
            {
                merged[k++] = B[j++];
            }
        }
        while (i < m)
        {
            merged[k++] = A[i++];
        }
        while (j < n)
        {
            merged[k++] = B[j++];
        }
        int size = m + n;
        if (size % 2 == 1)
        { // odd
            return merged[size / 2];
        }
        return (merged[(size / 2) - 1] + merged[size / 2]) / 2.0;
    }
};

int main()
{
    Solution sol;
    vector<int> A = {1, 3};
    vector<int> B = {2,4};
    double ans = sol.findMedianSortedArrays(A, B);
    cout << "The Median is: " << ans << endl;
    return 0;
}