//Leetcode problem 125:
//Valid palindrome:
//Time Complexity O(n):
//First Way by creating function for alpha numeric---
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isAlphanum(char ch){
        if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length()-1;
        while(start<=end){
            if(!isAlphanum(s[start])){
                start++;
                continue;
            }
            if(!isAlphanum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[start])!=tolower(s[end])){
                return false;
            }
            else
            {
                start++;
                end--;
            }
        }
        return true;
    }
};

//Second way by using cpp function for alpha numeric:
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while(start <= end) {

            if(!isalnum(s[start])) {
                start++;
                continue;
            }

            if(!isalnum(s[end])) {
                end--;
                continue;
            }

            if(tolower(s[start]) != tolower(s[end])) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};
int main() {
 return 0;
}