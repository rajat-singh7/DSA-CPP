#include <iostream>
using namespace std;
// Swaping alternate elements in Array

void Printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SwapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[8] = {2, 4, 1, 5, 7, 9, 8, 0};
    SwapAlternate(even, 8);
    Printarray(even, 8);

    int odd[5] = {2, 4, 1, 5, 7};
    SwapAlternate(odd, 5);
    Printarray(odd, 5);
    return 0;
}