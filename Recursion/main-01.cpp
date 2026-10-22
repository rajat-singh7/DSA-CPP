#include <iostream>
using namespace std;
//factorial Problem
int factorial(int n)
{
    // base case:
    if (n == 0)
        return 1;
    // Recursive part:
    return n * factorial(n - 1);
}

//Power problem:
int power(int n){
    //base case:
    if(n==0) return 1;
    int smallerProblem = power(n-1);
    int biggerProblem = 2*smallerProblem;
    return biggerProblem;
}

//Print Counting:
void count(int n){
    if(n==0) return;

    // cout<<n<<endl;
    // count(n-1);

    //There is a difference between these lines:
    count(n-1);
    cout<<n<<endl;
}
int main()
{
    // Recursion
    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;

    // Power of 2:
    int x;
    cin >> x;
    int answer = power(n);
    cout<<answer<<endl;

    //Print Counting:
    int v;
    cin>>v;
    cout<<endl;
    count(n);

}