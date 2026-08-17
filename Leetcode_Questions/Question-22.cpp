//Leetcode Problem 704:
//Binary Search:
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]<target){
                start = mid+1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else
            {
                return mid;
            }
        }
       return -1; 
    }
};
int main() {
    Solution s;
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    int ans = s.search(nums,target);
    cout<<"Answer is: "<<ans<<endl;
 return 0;
}