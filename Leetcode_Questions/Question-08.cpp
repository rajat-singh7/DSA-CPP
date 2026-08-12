//Leetcode Problem No-190:
//Reverse Bit:
class Solution {
public:
    int reverseBits(int n) {
        unsigned int result = 0; // for Deal with Negative Number we take unsigned int
        int count = 0;
        while(count<32){
            int bit = n&1;
            result = result<<1;
            result = result | bit;
            n = n>>1;
            count++;
        }
        return result;
    }
};