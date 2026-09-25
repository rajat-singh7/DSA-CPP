//Leetcode problem 1134:
//Armstrong Number:
//Premium leetcode problem so solved on vs code not do this on leetcode:
#include<iostream>
using namespace std;
bool isArmstrong(int n){
    int original = n;
    int sum = 0;
    while(n!=0){
    int dig = n%10;
    n = n/10;
    sum = sum+(dig*dig*dig);
    }
    if(sum==original){
        return true;
    }
    return false;
}
int main() {
    cout<<isArmstrong(153);
 return 0;
}