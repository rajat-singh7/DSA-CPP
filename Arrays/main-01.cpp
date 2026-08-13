#include <iostream>
using namespace std;
int main()
{

    // Declaration of an array:
    int nums[5];
    cout << "Everything is Fine" << endl;
    cout << nums[3] << endl; // We got an garbage value.
    // cout<<nums[10]; throws an error

    // Initialising an array:
    int second[5] = {1, 2, 3, 4, 5};
    // accessing an element:
    cout << second[0] << endl;
    cout << second[1] << endl;
    cout << second[2] << endl;

    // print the elements of an array by using loop
    int third[15] = {2, 4};
    // all other 13 elements will be 0;
    int n = 15;
    for (int i = 0; i < n; i++)
    {
        cout << third[i] << " ";
    }
    cout << endl;

    // Here all elements will be 0;
    int fourth[10] = {0};
    int x = 10;
    for (int i = 0; i < x; i++)
    {
        cout << fourth[i] << " ";
    }
    cout << endl;

    // Initialising all locations with 1[not possible with below line]
    int fifth[10] = {1};
    int m = 10;
    for (int i = 0; i < m; i++)
    {
        cout << fifth[i] << " ";
    }
    cout << endl;
    return 0;
}