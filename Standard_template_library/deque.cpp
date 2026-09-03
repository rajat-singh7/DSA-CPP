// Deque
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(4);
    d.push_front(2);
    cout << "Print deque" << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // pop function:
    /*
        d.pop_back();
        d.pop_front();
        cout<<d.size();
    */
    // at function:
    cout << "Element at 1st Index--> " << d.at(1) << endl;
    // Array is empty or not:
    cout << "Array is empty or not--> " << d.empty() << endl;
    // First Element:
    cout << "First Element--> " << d.front() << endl;
    // Last element:
    cout << "Last Element--> " << d.back() << endl;

    // Erase Function:
    cout << "Before erase size: " << d.size() << endl;
    d.erase(d.begin(), d.end());
    cout << "After erase size: " << d.size() << endl;

    return 0;
}