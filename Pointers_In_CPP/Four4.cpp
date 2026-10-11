// Double Pointer:
#include <iostream>
using namespace std;
void update(int **ptr)
{
    // ptr = ptr+1;
    // will anything change?--NO
    //*ptr = *ptr+1;
    // will anything change?--Yes
    **ptr = **ptr + 1;
    // will anything change?--Yes
}
int main()
{
    int v = 5;
    int *ptr = &v;
    int **ptr2 = &ptr;
    cout << v << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl; // Same value 5
    cout << ptr << endl;
    cout << *ptr2 << endl;
    cout << &v << endl; // same address

    cout << endl;
    cout << "Before " << v << endl;
    cout << "Before " << ptr << endl;
    cout << "Before " << ptr2 << endl;
    update(ptr2);
    cout << "after " << v << endl;
    cout << "after " << ptr << endl;
    cout << "after " << ptr2 << endl;

    return 0;
}