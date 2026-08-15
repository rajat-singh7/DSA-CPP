// Leetcode Question No-442:
// Find all Duplicates in an array.
#include <iostream>
#include <vector>
using namespace std;
// This is Negative Marking approach
// This approach is as good as hashmap approach
//This pattern is applicable only for range[1,n]:
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]) - 1;
            if (nums[index] < 0)
            {
                result.push_back(abs(nums[i]));
            }
            else
            {
                nums[index] = -nums[index];
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4,3,2,7,8,2,3,1};
    return 0;
}
