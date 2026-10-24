#include <iostream>
using namespace std;
void ReachHome(int src, int dest)
{
    // base case:
    cout << "Source " << src << " Destination " << dest << endl;
    if (src == dest)
    {
        cout << "We Reach at Home" << endl;
        return;
    }
    // Processing:
    src++;
    // Recursive Call:
    ReachHome(src, dest);
}

// Say digits:
void SayDigit(int n, string arr[])
{
    // Base case:
    if (n == 0)
        return;
    int digit = n % 10;
    n = n / 10;
    // Recursive Call:
    SayDigit(n, arr);
    cout << arr[digit] << endl;
}
int main()
{
    // Reach Destination:
    int dest = 10;
    int src = 1;
    cout << endl;
    ReachHome(src, dest);

    // Say digits:
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "enter the Number:" << endl;
    cin >> n;
    cout << endl<< endl;
    SayDigit(n, arr);
    return 0;
}