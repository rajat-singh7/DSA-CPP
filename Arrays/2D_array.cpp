// 2D Array:
#include <iostream>
using namespace std;
bool isTarget(int arr[][4], int target, int row, int column)
{
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            if (arr[row][column] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
//to print row wise sum:
void PrintSum(int arr[][4], int row, int column)
{
    cout << "Printing the sum--->" << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int column = 0; column < 4; column++)
        {
            sum += arr[row][column];
        }
        cout << sum << " ";
    }
}
//to print column wise sum:
void PrintSum2(int arr[][4], int row, int column)
{
    cout << "Printing the sum--->" << endl;
    for (int column = 0; column < 3; column++)
    {
        int sum = 0;
        for (int row = 0; row < 4; row++)
        {
            sum += arr[row][column];
        }
        cout << sum << " ";
    }
}

int main()
{
    // creation of 2D Array:
    int arr[3][4];
    // Take input in 2D array:
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cin >> arr[row][column];
        }
    }
    // Output
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cout << arr[row][column] << " ";
        }
        cout << endl;
    }
    // finding of any element in an 2D array:
    cout << "Enter the number for searching..." << endl;
    int target;
    cin >> target;
    if (isTarget(arr, target, 3, 4))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "elemnt is not found" << endl;
    }
    PrintSum(arr, 3, 4);
    PrintSum2(arr, 3, 4);
    return 0;
}