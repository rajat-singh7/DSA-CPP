//Leetcode Question NO-136:
//Problem Name - Single Number
//Brute force Approach
/*
#include<iostream>
#include<vector>
//Vector is An Dynamic Array
using namespace std;
//Function for Brute force:
int SingleNumber(vector<int>&nums){
    int n = nums.size();

    for (int i = 0;i<n;i++){
        int num = nums[i];
        int count = 0;

        //Finding those number in entire array
        for(int j  =0;j<n;j++){
            if(nums[j]==num){
                count++;
            }
        }
        if(count==1){
            return num;
        }
    }return -1;
} 
*/


// int main() {
//     vector<int>nums = {5,3,5,2,3};
//     //Call the function;
//     int ans = SingleNumber(nums);
//     cout<<"The Single Number is: "<<ans<<endl;
//     return 0;
// }


//MOST EFFICIENT SOLUTION
#include<iostream>
#include<vector>
using namespace std;
int main() {
    int res = 0;
    vector<int> nums = {2,3,4,2,3};
    //for n in nums In python
    for (int n : nums){
        res = n^res;
    }
    cout<<"Single Number Is "<<res<<endl;
 return 0;
}
