// problem Number 191
// Number of 1 Bit:
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