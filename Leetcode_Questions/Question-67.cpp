//Leetcode Problem 2413
//Smallest Even Multiple:
//Time complexity = O(1):
//Optimal approach(No approach exist as best as this one):
#include<iostream>
using namespace std;
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2==0){
            return n;
        }
        return n*2;
        
    }
};
int main() {
 return 0;
}