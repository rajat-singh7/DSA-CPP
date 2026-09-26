//Leetcode Problem 1071:
//Find greatest common divisor of strings:
//time Complexity --->O(n+m):
//Euclid Algorithm:
#include<iostream>
#include<numeric>
using namespace std;
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.length();
        int n2 = str2.length();
        if(str1+str2!=str2+str1){
            return "";
        }
        return str2.substr(0,gcd(n1,n2)); //this Give length of common part and then return the common part for both the strings...

        
    }
};
int main() {
 return 0;
}