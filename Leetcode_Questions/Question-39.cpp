// Leetcode Problem 1482:
// Minimum Number of Days to Make m Bouquets:
// Binary search on Answers Approach:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int CanMakeBouqe(vector<int> &bloomDay, int mid, int k)
{
    int bouqe_count = 0;
    int consecutive_count = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] <= mid)
        {
            consecutive_count++;
        }
        else
        {
            consecutive_count = 0;
        }
        if (consecutive_count == k)
        {
            bouqe_count++;
            consecutive_count = 0;
        }
    }
    return bouqe_count;
}
class Solution
{
public:
    int minDays(vector<int> &bloomDay, int m, int k)
    {
        int start = 1;
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (CanMakeBouqe(bloomDay, mid, k) >= m)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};
int main()
{
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;
    Solution sol;
    int result = sol.minDays(bloomDay, m, k);
    cout << "Minimum days to make " << m << " Bouquets: " << result << endl;
    return 0;
}