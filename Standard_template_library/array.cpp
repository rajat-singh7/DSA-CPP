// Array:
#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int basic_array[3] = {3, 5, 7};
    // STL Array:
    // Declaration and Initialisation
    array<int, 4> a = {1, 2, 3, 4};
    // Finding the size Of array:
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    // at function:
    cout << "Element at 2nd Index--> " << a.at(2) << endl;
    // Array is empty or not:
    cout << "Array is empty or not--> " << a.empty() << endl;
    // First Element:
    cout << "First Element--> " << a.front() << endl;
    // Last element:
    cout << "Last Element--> " << a.back() << endl;
    // Sorting the array:
    std::vector<int> vec = {5, 6, 7, 25, 7, 1, 7, 0};
    std::sort(vec.begin(), vec.end());

    return 0;
}