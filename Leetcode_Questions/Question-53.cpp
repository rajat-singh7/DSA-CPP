// Leetcode Problem 292:
// Nim Game:
#include <iostream>
using namespace std;
class Solution
{
public:
    bool canWinNim(int n)
    {
        return n % 4 != 0;
    }
};
int main()
{
    Solution sol;
    bool ans = sol.canWinNim(7);
    cout << ans;
    return 0;
}