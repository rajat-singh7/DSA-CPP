//Leetcode Problem No-268:
//Missing Number:


//Approach No-01
#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        return n*(n+1)/2 - accumulate(nums.begin(),nums.end(),0);
        
    }
};

//Approach No-02:
class Solution1 {
public:
    int missingNumber(vector<int>& nums1) {
        int result = nums1.size();
        for(int i=0;i<nums1.size();i++){
            result = result^i^nums1[i];
        }
        return result;
        
    }
};
int main() {
    //For first approach:
    Solution s;
    vector<int> nums = {3,0,1};
    cout<<"Missing Number is: "<<s.missingNumber(nums)<<endl;

    //for second approach:
    Solution1 s1;
    vector<int> nums1 = {3,0,1};
    cout<<"Missing Number is: "<<s.missingNumber(nums1)<<endl;



    return 0;
}


