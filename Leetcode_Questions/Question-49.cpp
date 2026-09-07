// Leetcode problem 151:
// Reverse word in string:
// Time complexity O(n):
// two Pointer approach:
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    string reverseWords(string s)
    {
        int n = s.length();
        reverse(s.begin(), s.end());
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            string word = "";
            while (i < n && s[i] != ' ')
            {
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if (word.length() > 0)
            {
                ans += " " + word;
            }
        }
        return ans.substr(1);
    }
};
int main()
{
    Solution sol;
    string s = "the sky is blue";
    string answer = sol.reverseWords(s);
    cout << "Our reverse string is:" << answer << endl;
    return 0;
}