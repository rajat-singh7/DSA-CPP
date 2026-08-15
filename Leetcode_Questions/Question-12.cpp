//Leetcode Question-217:
//Contains Duplicate:

//Approach -01(Brute Force)
//But By this approach time limit exceeded
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){ 
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return false;
        
    }
};


//Approach -02(Brute Force)
//Similar but use sort array method:
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        //Check side element
        //Ask yourself why I Use nums.size-1:
        //Because when we check about nums[i] == nums[i+1] not to cross limit of array
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false; 
    }
};

int main() {
    Solution s;
    vector<int> nums = {};
 return 0;
}