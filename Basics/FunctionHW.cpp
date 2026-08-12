#include <iostream>
using namespace std;
// Homework Question for pass by value:
// Question No-01-----------------------------------------
void update(int a)
{
    a = a / 2;
    // cout<<a<<endl;
}

// Question No-02-----------------------------------------
int update1(int a)
{
    a -= 5;
    return a;
}

// Question No-03-----------------------------------------
int update2(int a2)
{
    int ans = a2 * a2;
    return ans;
}

//TOPIC--function
// Question No-04-----------------------------------------
int AP(int n){
    int ans = 3*n+7;
    return ans;
}
int main()
{
    //Calling for first question------------
    int a = 10;
    update(a);
    cout << a << endl; // 10;

    //Calling for second question------------
    int a1 = 15;
    update1(a1);
    cout << a1 << endl; // 15;

    //Calling for third question------------
    int a2 = 14;
    a2 = update2(a2);
    cout << a2 << endl; //196

    //Calling for fourth question------------
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    int a3 = AP(n);
    cout<<"Your answer is :"<<a3<<endl;

    return 0;
}