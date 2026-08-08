//Problem Number 7
//Reverse Integer:
//Given a signed 32-bit integer x, return x with its digits reversed. 
//If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Value of n:" << endl;
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        //Ask Yourself why you did this(ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            cout<<"0";
            return 0;
        }
        ans = (ans * 10) + digit;
        n = n / 10;
    }
    cout << ans;
    return 0;
}