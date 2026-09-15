//Leetcode problem 443:
//String Compression:
//Very Important question for interviews:
//Time Complexity = O(n):
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();
        while(i<n){
            int j  = i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            //Exit from loop if Get a new char:
            //so store the char:
            chars[ansIndex++] = chars[i];

            //For counting the char:
            int count = j-i;
            if(count>1){
                string cnt = to_string(count);
                for(char ch:cnt){
                    chars[ansIndex++] = ch;
                }
            }
            //Go to the Next character:
            i = j;
        }
        return ansIndex;
    }
};
int main() {
 return 0;
}