//Leetcode Problem 1979:
//Find greatest common divisor of array:
//time Complexity --->O(n+logmin)=>O(n):
//Euclid Algorithm:
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
    private:
        int gcd(int a,int b){
            while(a>0 && b>0){
            if(a>b){
                a = a%b;}
                else{
                    b = b%a;
                }
            }
            if(a==0) return b;
            return a;
        }
public:
    int findGCD(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        int ans = gcd(min,max);
        return ans;    
    }
};
int main() {
 return 0;
}