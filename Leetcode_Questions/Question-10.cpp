//Leetcode Question-1207:
//Unique Number of Occurence:
//This is Brute force approach:
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        //Sort the Original Array
        sort(arr.begin(),arr.end());
        //Make an array Counts
        vector<int>counts;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            int count = 1;//Why 1 because i+1 means on same number pointer exists
            while(i+1<n && arr[i]==arr[i+1]){
                count++;
                i++;
            }
            //This line for storing the value of count in counts name array
            counts. push_back(count);
        }
        //Now sorting the counts name array
        sort(counts.begin(),counts.end());
        for(int j = 0;j<counts.size()-1;j++){
            if(counts[j]==counts[j+1]){
                return false;
            }
        }
        return true;
        
    }
};

int main(){
    Solution s;
    vector<int> arr = {1,2,1,2,1,3};
    cout<<s.uniqueOccurrences(arr);
    //Output is One(True)
}