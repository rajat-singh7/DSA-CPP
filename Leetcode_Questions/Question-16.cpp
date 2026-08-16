//leetcode problem - 167
//Two Sum-2
//Two pointer approach
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left_pointer = 0;
        int right_pointer = numbers.size()-1;
        while(left_pointer<right_pointer){
            if(numbers[left_pointer]+numbers[right_pointer]>target){
                right_pointer--;
            }
            else if(numbers[left_pointer]+numbers[right_pointer]<target){
                left_pointer++;
            }
            else
            {
                return {left_pointer+1,right_pointer+1}; //+1 Because of 1-indexed array
            }
        }
        return {};
        
    }
};
int main(){
    return 0;
}