//Leetcode problem 410:
//Split array largest sum:
//Binary search on answers:
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main() {
 return 0;
}
bool isPossible(vector<int>& nums, int mid,int k){
    int painter = 1;
    int board_count = 0;
    for(int i =0;i<nums.size();i++){
        if(nums[i]>mid){
            return false;
        }
        if(board_count+nums[i]<=mid){
            board_count += nums[i];
        }
        else
        {
            painter++;
            board_count = nums[i];
        }
    }
    return painter <= k;
        
}
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start = *max_element(nums.begin(),nums.end());//painted all boards
        int end = accumulate(nums.begin(),nums.end(),0);
        int ans =-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(isPossible(nums,mid,k)){
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