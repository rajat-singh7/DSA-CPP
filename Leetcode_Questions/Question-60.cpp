//Leetcode Problem 202:
//Happy Number:
//Time Complexity O(logn):
//Good approach but after sometime we should solve this question by floyd cycle detection algorithm
#include<iostream>
#include<set>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        set<int>s;
        while(n!=1){
            if(s.count(n)){ //This check if this number is in the set or not:
                return false;
            }
            s.insert(n);
            int sum = 0;
            while(n>0){
                int dig = n%10;
                sum += dig*dig;
                n/=10;
            }
            n = sum;
        }
        return true;
    }
};
int main() {
 return 0;
}