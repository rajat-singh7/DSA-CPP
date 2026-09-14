//Leetcode problem 1047:
//Remove all adjacent duplicate in string:
//Very Important question for interviews:
//Time Complexity = O(3n)= O(n):
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string result = "";
        int n = s.length();
        for(int i  = 0;i<n;i++){
            if(st.empty() || st.top()!=s[i]){
                st.push(s[i]);
            }
            else
            {
                st.pop();
            }
        }
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        //Reverse the result:
        reverse(result.begin(),result.end());
        return result;
        
    }
};
int main() {
 return 0;
}