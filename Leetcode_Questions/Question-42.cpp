// Leetcode problem 9:
// Palindrome Number:
// Time Complexity O(logn):
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        // Negative number can never be palindrome:
        if (x < 0)
        {
            return false;
        }
        // Used to save the original value of x:
        int copy = x;
        // Use long long to prevent integer overflow:
        long long ans = 0;
        while (x != 0)
        {
            int digit = x % 10;
            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return ans == copy;
    }
};

int main()
{
    Solution sol;
    int ans = sol.isPalindrome(121);
    cout << ans;
    return 0;
}