//Leetcode Problem 75:
//sort colours:
//Based on selection sorting:
//Time complexity O(n^2):
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i =0;i<n-1;i++){
            int minIndex = i;
            for(int j = i+1;j<n;j++){
                if(nums[j]<nums[minIndex]){
                    minIndex = j;
                }
            }
            swap(nums[minIndex],nums[i]);
        }   
    }
};
int main() {
 return 0;
}
