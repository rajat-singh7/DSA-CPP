// Pointers - Arrays and Function:
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {2, 5, 4, 5, 6, 7, 1, 3, 5, 6};
    cout << "The Address of first memory block: " << arr << endl;
    cout << "The Address of first memory block: " << &arr[0] << endl;
    cout << "The value at first block in an array: " << *arr << endl;
    *arr = *arr + 1; // next int type -- Pointer does not move actually only changes the value
    cout << *arr << endl;
    cout << "The value at Second block in an array: " << *(arr + 1) << endl; // gives the value of 5--Pointer moves the actually
    //Imporatant concept:
    int i = 2;
    arr[i] = *(arr+1); //Same 
    i[arr] = *(i+arr); //Same 
    cout << arr[2] << endl;
    cout << 2[arr] << endl;
    cout<<*(arr+1)<<endl;
    cout<<*(i+arr)<<endl;
    return 0;
}