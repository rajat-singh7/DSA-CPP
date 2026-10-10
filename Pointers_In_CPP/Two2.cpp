// Pointers - Arrays and Function:
#include <iostream>
using namespace std;
int main()
{
/*
    int arr[10] = {2, 5, 4, 5, 6, 7, 1, 3, 5, 6};
    cout << "The Address of first memory block: " << arr << endl;
    cout << "The Address of first memory block: " << &arr[0] << endl;
    cout << "The value at first block in an array: " << *arr << endl;
    *arr = *arr + 1; // next int type -- Pointer does not move actually only changes the value
    cout << *arr << endl;
    cout << "The value at Second block in an array: " << *(arr + 1) << endl; // gives the value of 5--Pointer moves the actually
    // Imporatant concept:
    int i = 2;
    arr[i] = *(arr + 1); // Same
    i[arr] = *(i + arr); // Same
    cout << arr[2] << endl;
    cout << 2 [arr] << endl;
    cout << *(arr + 1) << endl;
    cout << *(i + arr) << endl;

    int temp[10];
    cout << sizeof(temp) << endl; // 10*4 = 40
    cout << "Ist " << sizeof(*temp) << endl;
    cout << "2nd " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;  // 8
    cout << sizeof(*ptr) << endl; // 4
    cout << sizeof(&ptr) << endl; // 8

    int a[20] = {1, 2, 3, 34};
    cout << "---> " << a << endl;
    cout << &a << endl;
    cout << &a[0] << endl;
    int *p = &a[0];
    cout << "----> " << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    int arr[10];

    // ERROR:
    //ADDRESS ARE NOT ASSINABLE
    // arr = arr+1;
    int *p = &arr[0];
    cout << p << endl;
    p = p + 1;
    cout << p << endl;

    //cHARACTER ARRAY:
    int a[5] = {1,2,3,4,5};
    char c[6] = "abcde";
    //BEHAVIOR OF COUT IS DIFFERENT IN BOTH THE ARRAYS
    cout<<a<<endl; //address of first memory location
    cout<<c<<endl; //print the entire array
    char *p = &c[0];
    //print entire string until the null character not comes
    cout<<p<<endl;
*/
    char temp = 'z';
    char *pp = &temp;
    cout<<pp<<endl;
    return 0;
}