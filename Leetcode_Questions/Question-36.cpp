//Leetcode Problem 137:
//Single Number II:
//Time complexity O(n):
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int k = 0;k<=31;k++){
            int temp = 1<<k;   //For checking bits
            int countOnes = 0;
            for(int num: nums){
                if((num & temp)==0){ //means temp should be zero
                }
                else
                {
                    countOnes++;
                }
            }
            if(countOnes%3==1){
                result = result | temp;
            }
        }
        return result;   
    }
};
int main() {
 return 0;
}