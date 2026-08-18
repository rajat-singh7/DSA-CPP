// Leetcode Problem 81:
// Search in rotated sorted array-II:
// Binary search approach:
// Time complexity O(n):
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        while(start<=end){
            while(start<end && arr[start]==arr[start+1]){
                start++;
            }
            while(start<end && arr[end]==arr[end-1]){
                end--;
            }
            int mid = start+(end-start)/2;
            if(arr[mid]==target){
                return true;
            }

            if(arr[start]<=arr[mid]){ //left sorted
                if(arr[start]<=target && target<=arr[mid]){
                    end = mid-1;
                }
                else
                {
                    start = mid+1;
                }
            }
            else{ //right sorted
                if(arr[mid]<=target && target<=arr[end]){
                    start = mid+1;
                }
                else
                {
                    end = mid-1;
                }
            }
        }
        return false;
    }
};
int main(){
    Solution s;
    vector<int> arr = {2,5,6,0,0,1,2};
    int target = 0;
    bool ans = s.search(arr,target);
    cout<<"Your answer is: "<<ans<<endl;
    return 0;
}
