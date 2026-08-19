// Leetcode Problem 69:
// Sqrt(x):
// Binary search approach:
#include <iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0 || x == 1)
        {
            return x;
        }
        int start = 0;
        int end = x;
        int ans = 0;
        while (start <= end)
        {
            long long mid = start + (end - start) / 2;
            long long square = mid * mid;
            if (square == x)
            {
                return mid;
            }
            else if (square < x)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    int ans = s.mySqrt(18);
    cout << "Answer is: " << ans << endl;
    return 0;
}