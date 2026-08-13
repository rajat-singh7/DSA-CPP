#include <iostream>
using namespace std;
// How to print arrays with using functions:
void PrintArrays(int arr[], int size)
{
    cout << "Printing is start..." << endl;
    // print the arrays:
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing is Done...\n";
    cout << endl;
}

int main()
{
    // call the function
    int first[10] = {0};
    //PrintArrays(first, 10);
    int Firstsize = sizeof(first) / sizeof(int);
    cout << "The size Of First is " << Firstsize << endl;
    // Here we find only length of array not actual size...

    int second[10] = {1};
    //PrintArrays(second, 10);

    int third[5] = {1, 2, 3, 4, 5};
    //PrintArrays(third, 5);

    int fourth[10] = {2, 7};
    //PrintArrays(fourth, 10);
    int Fourthsize = sizeof(fourth) / sizeof(int);
    cout << "The size Of fourth is " << Fourthsize << endl;
    // Here we find only length of array not actual size...

    //Now we initialize an arrays of character;
    char ch[5] = {'a','x','v','e','h'};
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    return 0;
}