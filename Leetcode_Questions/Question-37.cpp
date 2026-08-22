//Leetcode Problem 3622:
//Daily challenge problem:
//Check divisibility by digit Sum and product:
//Time complexity O(logn):
#include<iostream>
using namespace std;

class Solution {
public:
    bool checkDivisibility(int n) {
        if(n==0) return false;
        //For preventing the overflow of integer we use long long 
        long long product = 1;
        long long sum = 0;
        int temp = n; //Preserve the original value:
        while(temp>0){
            int digit = temp%10;
            product = product*digit;
            sum = sum+digit;
            temp = temp/10;
        }
        long long total = product+sum;
        if(total==0){
            return false;
        }
        return (n%total==0);
    }
};
int main() {
 return 0;
}