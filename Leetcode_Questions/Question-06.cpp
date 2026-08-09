//LeetCode Problem No-231:
//This is Brute Force Approach:

#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the Value of n:"<<endl;
    cin>>n;
    for(int i=0; i<=30; i++){
        int ans = pow(2,i);
        if(ans == n){
            cout<<"True"<<endl;
            return true;
        }
    }
    cout<<"False"<<endl;
    return false;



    
    //This is Good Approach:
    //Bit manipulation:
    class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        return (n & (n-1))==0;
        
        
    }
};


    

    

 return 0;
}