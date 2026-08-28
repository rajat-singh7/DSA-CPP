//Leetcode Problem 74:
//Search a 2D matrix:
//Binary search approach:
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low =0;
        int high = (n*m)-1;
        while(low<=high){
           int mid = low+(high-low)/2;
           int row = mid/m;
           int column = mid%m;
           if(matrix[row][column]==target){
            return true;
           }
           else if(matrix[row][column]<target){
            low = mid+1;
           }
           else
           {
            high = mid-1;
           }
        }
        return false;
    }
};
int main() {
 return 0;
}