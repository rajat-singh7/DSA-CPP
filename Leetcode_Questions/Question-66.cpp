//Leetcode Problem 2447:
//Numbers of subarrays with gcd equal to k:
//Time Complexity: O(n² log M) where M = max(nums[i]):
//Euclid Algorithm:
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
           int gcd = nums[i];
            for(int j = i;j<n;j++){
                gcd = __gcd(gcd,nums[j]);
                if(gcd==k){
                ans++;
            }
            if(gcd<k)
            {
                break;
            }
        }    
    }
        return ans;
    }
};
int main() {
 return 0;
}