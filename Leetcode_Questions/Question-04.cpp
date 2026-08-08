//Leetcode Problem Number 1009:
//Complement of base 10 integer :
//Problem No-476 as similar as 1009 but in 476 not take n==0 edge case
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter The value of N:"<<endl;
    cin>>n;
    int m = n;
    int mask = 0;
    //Edge Case:
    if(n==0){
        cout<<"1";
        return 1;
    }

    while(m!=0){
        mask = (mask<<1) | 1;
        m = m>>1;
    }
    int answer = (~n) & mask;
    cout<<answer;
 return 0;
}