// leetcode problem - 167
// Two Sum-2
// Two pointer approach
// Two Pointer approach is Best approach for this Problem:
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int left_pointer = 0;
        int right_pointer = numbers.size() - 1;
        while (left_pointer < right_pointer)
        {
            if (numbers[left_pointer] + numbers[right_pointer] > target)
            {
                right_pointer--;
            }
            else if (numbers[left_pointer] + numbers[right_pointer] < target)
            {
                left_pointer++;
            }
            else
            {
                return {left_pointer + 1, right_pointer + 1}; //+1 Because of 1-indexed array
            }
        }
        return {};
    }
};
int main()
{
    Solution s;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = s.twoSum(numbers, target);

    if (!ans.empty())
    {
        cout << "Indices: " << ans[0] << " ," << ans[1] << endl;
    }
    else
    {
        cout << "No solution found";
    }
    return 0;
}