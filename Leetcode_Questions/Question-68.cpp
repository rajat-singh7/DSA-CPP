//Leetcode Problem 2470:
//Numbers of subarrays with lcm equal to k:
#include<iostream>
#include<vector>
using namespace std;
class Solution {
    private: //Recursion
       int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}
    int lcm(int a,int b){
        int g = gcd(a,b);
        return a*b/g;
    }
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            int Current_lcm = nums[i];
            for(int j = i;j<n;j++){
                Current_lcm = lcm(Current_lcm,nums[j]);
                if(Current_lcm==k){
                    ans++;
                }
                if(Current_lcm>k){
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