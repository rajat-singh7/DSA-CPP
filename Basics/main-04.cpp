#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    // Decimal to Binary
    /*
        int n;
        cin >> n;
        int ans = 0;
        int i = 0;
        while (n != 0)
        {
            int bit = n & 1;
            ans = bit * pow(10, i) + ans;
            n = n >> 1;
            i++;
        }
        cout << ans;

        // Binary to Decimal
        int n;
        cin >> n;
        int ans = 0;
        int i = 0;
        while (n != 0)
        {
            int digit = n % 10;
            if (digit == 1)
            {
                ans = pow(2, i) + ans;
            }
            n = n / 10;
            i++;
        }
        cout << ans;
        return 0;
    */

    // SWITCH FUNCTION:
    int day;
    cout << "Enter Number from 1-7" << endl;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid Input \n";
    }

    // Simple Calculator Program:
    //Homework:
    int a;
    cout << "Enter First Number:" << endl;
    cin >> a;

    int b;
    cout << "Enter Second Number:" << endl;
    cin >> b;

    char operations;
    cout << "Enter the opertion you want to perform:\n";
    cin >> operations;

    switch (operations)
    {
    case '+':
        cout << "Your Sum is :" << a + b << endl;
        break;

    case '-':
        cout << "Your subtraction is :" << a - b << endl;
        break;

    case '*':
        cout << "Your Multiplication is :" << a * b << endl;
        break;

    case '/':
        cout << "Your division is :" << a / b << endl;
        break;

    case '%':
        cout << "Your Remainder is :" << a % b << endl;
        break;
    }

}