//Leetcode Problem 3658:
//GCD of Sum even and sum odd:
//Time Complexity = O(log n):
//Euclid Algorithm:
#include<iostream>
using namespace std;
class Solution {
    private:
        int gcd(int a,int b){
            while(a>0 && b>0){
                if(a>b){
                    a= a%b;
                }
                else{
                    b = b%a;
                }
            }
            if(a==0) return b;
            return a;
        }
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n*n;
        int sumEven = (n*n)+n;
        int ans = gcd(sumOdd,sumEven);
        return ans;
        
    }
};
int main() {
 return 0;
}