// Refernce variables:
#include <iostream>
using namespace std;

//pass by value:
void update1(int n){
    n++;
}

//pass by reference:
void update2(int &n){
    n++;
}

int main()
{
    // Creating a ref variable:
    int i = 5;
    int &j = i;
    cout << i << " " << j << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << " " << j << endl;
    // WHY REFERNCE VARIABLE:
    /*We need reference variables in C++ to access existing variables through another name, 
    modify original data directly, and avoid unnecessary copying when passing objects to functions.
    They make code more efficient return 0;*/

    //pass by value:
    int a = 15;
    cout<<"before: "<<a<<endl;
    update1(a);
    cout<<"After: "<<a<<endl;  //same values
    //pass by reference:
    cout<<"before: "<<a<<endl;
    update2(a);
    cout<<"After: "<<a<<endl;

}