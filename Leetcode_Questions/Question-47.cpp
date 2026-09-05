//Leetcode Problem 1752:
//Check if array is sorted and rotated:
//Time Complexity O(n):
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1;
        
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,2,3,4,5};
    int ans = sol.check(nums);
    cout<<"Answer: "<<ans<<endl;
 return 0;
}
