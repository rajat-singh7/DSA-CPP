#include <iostream>
using namespace std;
int main()
{
    // Bitwise Operators
    /*
        int a = 4;
        int b = 6;
        cout<<"a&b "<< (a&b) <<endl;   //4
        cout<<"a|b "<< (a|b) <<endl;   //6
        cout<<"~a "<<~a<<endl;         //-5
        cout<<"a^b "<<(a^b) <<endl;    //2
    */

    // Left shift and right shift Operators:
    /*
        cout<<(17>>1)<<endl; //8
        cout<<(17>>2)<<endl; //4
        cout<<(19<<1)<<endl; //38
        cout<<(21<<2)<<endl; //84
    */

    // Post and Pre Increment and Decrement:
    // Important--For Interview Purpose:
    /*
        int i = 7;
        cout<<(i++)<<endl;  // 7
        cout<<(++i)<<endl;  // 9
        cout<<(i--)<<endl;  // 9
        cout<<(--i)<<endl;  // 7
    */

    /*
        //Practice Question-01----------------------------
        int a , b = 1;
        a = 10;
        if(++a){
            cout<<b;
        }
        else{
            cout<<(++b);
        }
    */
    // Output will Be 1

    // Practice Question-02----------------------------
    /*
        int a = 1;
        int b = 2;

        if(a-- > 0 && ++b > 2){ // > Greater Than
            cout<<"Stage 1 - Inside If"<<endl;
        }
        else
        {
            cout<<"Stage 2 - Inside Else"<<endl;
        }
        cout<< a <<" " << b << endl;
    */

    // Practice Question-03----------------------------
    /*
        int a = 1;
        int b = 2;

        if(a-- > 0 || ++b > 2){
            cout<<"Stage 1 - Inside If"<<endl;
        }
        else
        {
            cout<<"Stage 2 - Inside Else"<<endl;
        }
        cout<< a <<" " << b << endl;
        //Here (++b) is skipped entirely therefore,b remains unchnaged at 2.
    */

    // Practice Question-04----------------------------
/*
    int number = 3;
    cout << (25 * (++number)) << endl; // 100
*/
    // Practice Question-05----------------------------
/*
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b << endl; // 1
    cout << c << endl; // 3
    /*DRY RUN:
    a = 1
    b = 1
    then a = 2;
    and c = ++a so a = 3*/
/**/
    // FOR LOOP
/*
    int n;
    cout << "Enter The Value of Number:" << endl;
    cin >> n;

    cout << "Printing the number from 1-"<<n << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    //also use multiple conditions and multiple variable
    for(int a = 0, b = 1;a>=0 && b >= 1;a--,b--){
        cout<<a <<" " <<b << endl;
    }
*/
    //Question No-01 Sum from 1 to n:
/*
    int n;
    cout<<"Enter the Value for Sum:"<<endl;
    cin>>n;
    int sum = 0;
    for(int i=1; i<=n;i++){
        sum = sum + i; 
    }
    cout<<"Your Sum is :\n";
    cout<<sum<<endl;
*/

    //Question No-02 Fibonacci Series:
/*
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i = 1;i<=n;i++){
        int Nextnumber = a +b;
        cout<<Nextnumber<<" ";
        //Storing the value of B in A
        //And Value of Next number in B
        a = b;
        b = Nextnumber;
    }
*/

    //Question No-03 Prime Number:
/*
    int n;
    cout<<"Enter Number For Check Prime:"<<endl;
    cin>>n;
    bool isPrime = 1;
    //This Loop is dividing the number from 2 to n-1:
    for(int i = 2;i<n;i++){
        //rem = 0 Not Prime
        if(n%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 0){
        cout<<"Not A Prime Number:"<<endl;
    }
    else{
        cout<<"Is a Prime Number:"<<endl;
    }
*/
    //Continue statement
/*
    int n = 10;
    for(int i=1;i<=n;i++){
        if(i==5){
            cout<<"Here i is 5\n";
            continue;
        }
        else
        {
            cout<<i<<endl;
        }
    }
*/

    //Practice Question-01----------------------------
    //Output will Be 0 2 4
/*
    for(int i = 0;i<=5;i++){
        cout<<i<<" ";
        i++;
    }
*/

    //Practice Question-02----------------------------
/*
    for(int i = 0;i<5;i++){
        for(int j = i;j<=5;j++){
            cout<<i<<" "<<j <<endl;
        }
    }
*/

    //Practice Question-03----------------------------
/*
    for(int i = 0;i<5;i++){
        for(int j = i;j<=5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j <<endl;
            //SAME OUTPUT AS PREVIOUS
        }
    }
*/
    //Operators Precedence:
    /*use Brackets
    int op = (((2*5)/2)*5)/25; //1
    cout<<op<<endl;
*/ 
    //Leetcode Question-01
    int n = 234;
    int sum = 0;
    int product = 1;
    while(n!=0){
        int digit = n%10;
        product = product*digit;
        sum = sum + digit;

        n = n/10;
        
    }
    cout<<(product-sum);
    //My Input
    int n = 456;
    int sum = 0;
    int product = 1;
    while(n!=0){
        int digit = n%10;
        product = product*digit;
        sum = sum + digit;

        n = n/10;
        
    }
    cout<<(product-sum);
    return 0;
}