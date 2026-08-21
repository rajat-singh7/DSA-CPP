// problem Number 191
// Number of 1 Bit:
//Time complexity O(1):
//Approach 01:
#include <iostream>
using namespace std;
int main()
{
    int n = 00000000000010011;
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count;
    return 0;
}

//Second Approach :
//Best approach for interview purpose:
//This approach count only one's:
class Solution {
public:
    int hammingWeight(int n) {
        //Brian Kernighan's Algorithm:
        int count= 0;
        while(n!=0){
            n = n & (n-1);
            count++;
        }
        return count; 
    }
};