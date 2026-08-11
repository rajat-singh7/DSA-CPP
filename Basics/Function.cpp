#include<iostream>
using namespace std;
//From Basic
//FUNCTION NO-01:
int add(int a , int b){
    /* int a , int b are the parameters */
    return a + b;
}
//Here the code for declaring the function
//int add(int a , int b);

//Default Arguments:
int multiply(int x, int y=7){
    return x*y;
}
int main() {
    cout<<add(3,5)<<endl;; 
    /*3,4 are the arguments of function*/
    int mul = multiply(6); //42
    int mul1 = multiply(4,5); //20
    cout<<mul<<endl;
    cout<<mul1<<endl;

 return 0;
}
