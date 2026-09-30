//Leetcode Problem 412:
//Fizz Buzz:
//Time complexity = O(n):
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result(n,"");
        for(int i = 1;i<n+1;++i){
            if(i%15==0){
                result[i-1] = "FizzBuzz";
            }
            else if(i%5==0){
                result[i-1] = "Buzz";
            }
            else if(i%3==0){
                result[i-1] = "Fizz";
            }
            else{
                result[i-1] = to_string(i);
            }
        }
        return result;
    }
};
int main() {
 return 0;
}