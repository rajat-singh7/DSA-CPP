//Leetcode Problem 75:
//sort colours:
//Approach Nummber 01:
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

//Approach Number 02:
//Time Complexity For this approach is O(n)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count0 = 0, count1 = 0, count2 = 0;
        //Count the apperance of Numbers:
        for(int i =0;i<n;i++){
            if(nums[i]==0) count0++;
            else if(nums[i]==1) count1++;
            else count2++;
        }
        //Overwrite the Elements of Array:
        int index= 0;
        for(int i =0;i<count0;i++){
            nums[index++] = 0;
        }
        for(int i =0;i<count1;i++){
            nums[index++] = 1;
        }
        for(int i =0;i<count2;i++){
            nums[index++] = 2;
        }
        
    }
};

//Approach 03:
//Best approach to solve this problem:
//Dutch national Flag Algorithm:
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid =0;
        int high = n-1; 
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else
            {
                swap(nums[high],nums[mid]);
                high--;
            }
        }
        
    }
};
int main() {
 return 0;
}
