#include<iostream>
using namespace std;

int main() {
    /*cout<<"Hello World!"<<endl;
    cout<<"Today is a Present!\n";*/

    //Data Type And Variables:
/*
    int a = 20;
    cout<<a<<endl;
    char b = 'D';
    cout<<b<<endl;

    bool bl = true; //1 if False 0
    cout<<bl<<endl;
        
    float c = 3.5;
    cout<<c<<endl;

    double d = 1.24;
    cout<<d<<endl;
*/

    // How to See Sizes:
/*
    int size1 = sizeof(a); //4
    cout<<"Size of Integer is: "<<size1<<endl;

    int size2 = sizeof(b); //1
    cout<<"Size of Character is: "<<size2<<endl;

     int size3 = sizeof(bl); //1
    cout<<"Size of Boolen is: "<<size3<<endl;

    int size4 = sizeof(c); //4
    cout<<"Size of Float is: "<<size4<<endl;

     int size5 = sizeof(d); //8
    cout<<"Size of Double is: "<<size5<<endl;
*/

    //Type casting:
/*
    int a = 'a'; //char to int
    cout<<a<<endl;
    //int to char 
    char ch = 97;
    cout<<ch<<endl;
    char ch1 = 123456;
    cout<<ch1<<endl;//Warning of overload
*/
    //Operators:
    // int a = 2/5; //Output will be Int
    // cout<<a<<endl;
    // float b = 2.5/5; //Output will be float
    // cout<<b<<endl;
    // double c = 4.5/5; //Output will be double
    // cout<<c<<endl;
    //Relational Operators:
    int x = 10;
    int y = 20;
    bool first = (x==y); //False(0)
    cout<<first<<endl;
    bool second = (x!=y); //True(1)
    cout<<second<<endl;
    bool third = (x>=y); //False(0)  
    cout<<third<<endl;
    bool fourth = (x<=y); //True(0)
    cout<<fourth<<endl;
    bool fifth = (x<y);  //True(1)
    cout<<fifth<<endl;
     bool sixth = (x>y); //False(0)
    cout<<sixth<<endl;
    //Logical Operators:
    // And(&&)
    bool seven = ((x==y) && (x!=y));
    cout<<seven<<endl;
    //Not(!)
    int a = 23;
    cout<<!a<<endl;
    // OR(||)
    bool eight = ((x==y) || (x!=y));
    cout<<eight<<endl;
    return 0; 

}