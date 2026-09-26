//Leetcode Problem 914:
//X of a kind in a deck of Cards:
//time Complexity --->O(n):
//Euclid Algorithm:
#include<iostream>
#include<vector>
#include<unordered_map>
#include<numeric>
using namespace std;
int main() {
 return 0;
}
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int ,int>freq;
        //traverse in deck and count...
        for(auto i:deck){
            freq[i]++;
        }
        int ans = 0;
        for(auto a:freq){
            ans = gcd(ans,a.second); //second = value in map
        }
        if(ans<=1){
            return false;
        }
        return true;
        
    }
};