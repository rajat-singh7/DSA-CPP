//Leetcode Problem 242:
//Valid Anagram:
//Approach Number 01:
//Time complexity for this --O(nlogn+mlogm):
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};


//Approach Number 02:
//Best approach:
//time Complexity--O(n + m) = O(n + n) = O(2n) = O(n):
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int> h(26);
        //For String the Frequency
        for(int i= 0;i<s.size();i++){
            h[s[i]-'a']++;
        }
        //For Erasing the Frequency
        for(int i= 0;i<t.size();i++){
            int x = --h[t[i]-'a'];
            if(x<0) return false;
        }
        return true;
    }
};
int main() {
 return 0;
}
