// Leetcode Problem 509:
// Fibonacci Number:
// Recursion Approach:
//  Time Complexity-->O(2^n)
//  Space Complexity-->O(n)
#include <iostream>
using namespace std;
class Solution
{
public:
    int fib(int n)
    {
        // Base case:
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        // Recursive Call:
        int ans = fib(n - 1) + fib(n - 2);
        return ans;
    }
};

// Better approach ---Iterative approach:
// Time:O(n)
// Extra space:O(1)
class Solution2
{
public:
    int fibo(int n)
    {
        int a = 0;
        int b = 1;
        if (n <= 1)
            return n;
        for (int i = 2; i <= n; i++)
        {
            int next = a + b;
            a = b;
            b = next;
        }
        return b;
    }
};
int main()
{
    Solution object;
    int answer = object.fib(10);
    cout<<answer<<endl;
    
    Solution2 obj;
    int result = obj.fibo(5);
    cout << result << endl;
    return 0;
}