#include <iostream>
using namespace std;
// From Basic
// FUNCTION NO-01:
int add(int a, int b)
{
    /* int a , int b are the parameters */
    return a + b;
}
// Here the code for declaring the function
// int add(int a , int b);

// Default Arguments:
int multiply(int x, int y = 7)
{
    return x * y;
}
// FUNCTION NO-02:
void studentinfo(string name, int age, string subject)
{
    cout << "Name:" << name << endl;
    cout << "Age:" << age << endl;
    cout << "Subject:" << subject << endl;
}

// FUNCTION NO-03:
int power()
{
    // We also take input in int main and here
    int a;
    cout << "Enter the value of A:" << endl;
    cin >> a;

    int b;
    cout << "Enter the value of B:" << endl;
    cin >> b;

    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

// FUNCTION NO-04:
bool isEven(int n)
{
    // odd
    if (n & 1 == 1)
    { // if true
        return 0;
    }
    else
    {
        return 1;
    }
}

// FUNCTION NO-05:
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    return numerator / denominator;
}

// FUNCTION NO-06:
void printCounting(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << i << endl;
    }
}

// FUNCTION NO-07:
//  1-->prime
//  0-->Not prime

bool Isprime(int p)
{
    for (int i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    cout << add(3, 5) << endl;
    ;
    /*3,4 are the arguments of function*/
    int mul = multiply(6);     // 42
    int mul1 = multiply(4, 5); // 20
    cout << mul << endl;
    cout << mul1 << endl;

    // Calling of second function:
    studentinfo("Raj", 17, "Mathematics");

    // Calling of third function:
    int ans = power();
    cout << "Your ans is: " << ans << endl;

    // Calling of fourth function:
    int n;
    cout << "enter the value of n:" << endl;
    cin >> n;
    int answer = isEven(n); // Only variable name is here not the type of variable
    cout << answer << endl;

    // Calling of fifth function:
    int x;
    cout << "Enter a number for nCr:" << endl;
    cin >> x;
    int y;
    cout << "Enter a number for nCr:" << endl;
    cin >> y;
    int an = nCr(x, y);
    cout << "Your answer is: " << an << endl;

    // calling the sixth function:
    int num;
    cin >> num;
    printCounting(num);

    // calling the seventh function:
    int number;
    cout << "Enter a number for check prime or not:" << endl;
    cin >> number;
    if (Isprime(number))
    {
        cout << "is a prime number:" << endl;
    }
    else
    {
        cout << "Not a prime number:" << endl;
    }
    return 0;
}
