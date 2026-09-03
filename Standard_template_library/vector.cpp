// Vector:
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Initialization:
    vector<int> v;
    cout << "Capacity--> " << v.capacity() << endl;
    // second way to initialize:
    vector<int> a(5, 1);
    // for copying the vector:
    vector<int> last(a);
    cout << "Print a " << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Print last " << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;
    v.push_back(1);
    cout << "Capacity--> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity--> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity--> " << v.capacity() << endl;
    cout << "Size--> " << v.size() << endl;
    // Capacity will be just double:

    // at function:
    cout << "Element at 2nd Index--> " << v.at(2) << endl;
    // First Element:
    cout << "First Element--> " << v.front() << endl;
    // Last element:
    cout << "Last Element--> " << v.back() << endl;
    // Pop Function:
    cout << "Before Pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "After Pop " << endl;
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // Clear Function:
    cout << "Size Before Using Clear Function: " << v.size() << endl;
    v.clear();
    cout << "Size After Using Clear Function: " << v.size() << endl;
    // Capacity will be same as previous:
    cout << "capacity: " << v.capacity() << endl;

    return 0;
}