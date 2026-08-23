//Leetcode Problem 1011:
//Capacity to ship packages within D Days:
//Binary search approach:
//Time complexity O(nlog(Sum-Max)):
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool in_days(vector<int>& nums, int days,int capacity){
    int day = 1;
    int current_weight = 0;
    for(int i =0;i<nums.size();i++){
        if(current_weight + nums[i]<=capacity){
            current_weight = current_weight+nums[i];
        }
        else
        {
            day++;
            current_weight = nums[i];
        }
    }
    if(day<=days){
        return true;
    }
    return false;

}
class Solution {
public:
    int shipWithinDays(vector<int>& nums, int days) {
        int start = *max_element(nums.begin(),nums.end());
        int sum = 0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            sum = sum +nums[i];
        }
        int end = sum;
        int ans = -1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(in_days(nums,days,mid)){
                ans = mid;
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        return ans;
    }
};
int main() {
 return 0;
}