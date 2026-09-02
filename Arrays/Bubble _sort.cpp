#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        //For round 1 to n-1:
        for(int i = 1;i<n;i++){
            bool swaped = false;
            for(int j =0;j<n-i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    swaped = true;
                }
            }
            if(swaped==false){
                break;
            } 
        } 
        return nums;  
    }
};
int main() {
 return 0;
}