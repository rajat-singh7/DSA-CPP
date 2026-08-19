// Leetcode Problem 26:
// Remove duplicate from an array:
// Two pointer approach:
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0, j = 1;
        while (j < n)
        {
            if (nums[i] != nums[j])
            { // not unique element
                i++;
                nums[i] = nums[j];
            }
            j++; // go for next unique element
        }
        return (i + 1);
    }
};
int main()
{
    Solution s;
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int ans = s.removeDuplicates(nums);
    cout << "Answer is: " << ans << endl;
    return 0;
}