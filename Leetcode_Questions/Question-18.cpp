//Leetcode Problem 34:
//First and last occurence of an elements in an array:
//Binary Search approach
//Time Complexity = O(logn)
#include<iostream>
#include<vector>
using namespace std;
int Find_Left_Most_occurence(vector<int>& nums, int target , int n){
    int start = 0;
    int end = n-1;
    int Left_most = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(nums[mid]==target){
            Left_most = mid;
            end = mid-1;
        }
        else if(nums[mid]>target){
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return Left_most;

}

int Find_Right_Most_occurence(vector<int>& nums, int target , int n){
    int start = 0;
    int end = n-1;
    int Right_most = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(nums[mid]==target){
            Right_most = mid;
            start = mid + 1;
        }
        else if(nums[mid]>target){
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return Right_most;

}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int Left_most = Find_Left_Most_occurence(nums,target,n);
        int Right_most = Find_Right_Most_occurence(nums,target,n);
        return vector<int>{Left_most,Right_most};
        
    }
};
int main(){
    return 0;
}