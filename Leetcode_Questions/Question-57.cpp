//Leetcode Problem 48:
//Rotate Image:
//Tc O(n^2):
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
private:
    void transpose(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i =0;i<n;i++){
            for(int j= i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }

public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        transpose(matrix);
        for(int i =0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        } 
    }
};
int main() {
 return 0;
}