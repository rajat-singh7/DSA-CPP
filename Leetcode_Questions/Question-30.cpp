// Leetcode Problem 367:
// Valid Perfect square:
// Binary search approach:
// time complexity O(logn):
#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int x)
    {
        if (x == 0 || x == 1)
        {
            return true;
        }
        int start = 1;
        int end = x;
        while (start <= end)
        {
            long long mid = start + (end - start) / 2;
            long long square = mid * mid;
            if (square == x)
            {
                return true;
            }
            else if (square < x)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return false;
    }
};
int main()
{
    Solution s;
    bool ans = s.isPerfectSquare(64);
    cout << "Answer is: " << ans << endl;
    return 0;
}