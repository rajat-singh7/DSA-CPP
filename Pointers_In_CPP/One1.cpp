#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    cout << "The Value of num is: " << num << endl;
    // Address of Operator:
    cout << "The address of num is: " << &num << endl; //Address in Hexadecimal form 
    //Pointer 
    int *ptr = &num;
    cout<<"The Value is : "<<*ptr<<endl;
    cout<<"The Value is : "<<ptr<<endl;//address
    //We can create differnt types of Pointers:
    double d = 4.55;
    double *p2 = &d;
    cout<<"The Value is : "<<*p2<<endl;
    cout<<"The Value is : "<<p2<<endl;
    //Size of Pointer:
    cout<<"The size of Integer is: "<<sizeof(num)<<endl;
    cout<<"The size of pointer is: "<<sizeof(ptr)<<endl;
    cout<<"The size of pointer is: "<<sizeof(p2)<<endl;
    //Pointer int to is created and store the garbage values:
    // int *p3;
    // cout<<"The value of p3 is : "<<*p3<<endl;

    //another format to initialize the pointer:
    int i = 10;
    int *ptt = 0;
    ptt = &i;
    cout<<ptt<<endl;
    cout<<*ptt<<endl;
    //Simple format we learn about this:
    int *ptr2 = &i;
    cout<<ptt<<endl;
    cout<<*ptt<<endl;
    //We got the same value for both:
    //How to increment the value of any Pointer:
    int a = 5;
    int *pp = &a;
    cout<<"Before:"<<*pp<<endl;
    (*pp)++;
    cout<<"after:"<<*pp<<endl;

    //Copying a Pointer:
    int *pointer = pp;
    cout<<pp<<" - "<<pointer<<endl;
    cout<<*pp<<" - "<<*pointer<<endl;

    //Important concept:
    int s = 15;
    int *point = &s;
    *point = *point+1;
    cout<<*point<<endl;
    cout<<"point before "<<point<<endl;
    point = point+1;
    cout<<"point after "<<point<<endl; //go to the next address


    

    return 0;
}