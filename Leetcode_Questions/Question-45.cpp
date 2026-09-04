//Leetcode Problem 344:
//Reverse string:
//Two Pointer Approach:
//Time Complexity O(n):
//Space Complexity O(1):
//Optimized solution:
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int start = 0;
        int end = n-1;
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};
int main() {
    Solution s;
    vector<char> st = {'h', 'e', 'l', 'l', 'o'};
    s.reverseString(st);

    for(char ch : st) {
        cout << ch;
    }
 return 0;
}