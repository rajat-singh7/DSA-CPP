// Leetcode Problem 70:
// Climbing Stairs:
// Time Complexity:O(n)
// Space Complexity:O(1)
#include <iostream>
using namespace std;
class Solution
{
public:
    int climbStairs(int n)
    {
        int a = 1;
        int b = 2;
        if (n < 0)
            return 0;
        if (n == 0)
            return 1;
        if (n <= 2)
            return n;

        for (int i = 3; i <= n; i++)
        {
            int next = a + b;
            a = b;
            b = next;
        }
        return b;
    }
};
int main()
{
    Solution sol;
    int result = sol.climbStairs(25);
    cout << result << endl;
    return 0;
}