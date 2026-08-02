#include <iostream>
using namespace std;
int main()
{
    // Conditionals
    /*
        int a;
        cout << "Enter A Number:" << endl;
        cin >> a;
        if (a > 0)
        {
            cout << "Number is Positive" << endl;
        }
        else if (a = 0)
        {
            cout << "Number is Zero" << endl;
        }
        else
        {
            cout << "Number is Negative" << endl;
        }
    */

    /*
        int x, y;
        cout<<"Enter the value of X:"<<endl;;
        cin >>x;
        cout<<"Enter the value of Y:"<<endl;;
        cin >>y;
        if (x > y)
        {
            cout << "X is greater than Y" << endl;
        }

        else if (x == y)
        {
            cout << "X is equal to Y" << endl;
        }

        else
        {
            cout << "Y is greater than X" << endl;
        }
    */
    /*
        int a = 9;
        if(a == 9){
            cout<<"Niney"<<endl; //output
        }
        // else if(a>0){
        //     cout<<"Positive"<<endl; //Code Not reach here
        // }
        if(a>0){
            cout<<"Positive"<<endl; //output
        }
        else{
            cout<<"Negative"<<endl;
        }
    */
    /*
        int a = 2;
        int b = a +1;
        if((a=3)==b){
            cout<<a<<endl;
        }
        else{
            cout<<a + 1;
        }
    */
    /*
        int a = 24;
        if(a > 20){
            cout<<"Love"<<endl; //Output
        }
        else if(a==24){
            cout<<"Lovely"<<endl;
        }
        else{
            cout<<"Babbar";
        }
    */
    //*****Good Example*****/
    /*
        char ch;
        cout<<"enter any Character:"<<endl;
        cin>>ch;
        //Use And Operators
        if(ch >='a' && ch <= 'z'){
            cout<<"This is Lowercase"<<endl;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            cout<<"This is Uppercase"<<endl;
        }
        else if(ch >= '0' && ch <= '9')
        {
            cout<<"This is Numerical value"<<endl;
        }
        else{
            cout<<"Special Character"<<endl;
        }
    */
    // WHILE LOOP:
    /*
        int n;
        n = 0;
        while(n<=25){
            cout<<n<<endl;
            n++;
        }
        //Method No.02
        int a;
        cin>>a;
        int i = 1;
        while(i<=a){
            cout<<"Hello "<<i<<endl;
            i ++;
        }
        int b;
        cout<<"Enter Any Number:"<<endl;
        cin>>b;
        int num = 1;
        int sum  = 0;
        while(num<=b){
            sum = sum + num;
            num = num + 1;
        }

        cout<<"Value Of Sum is "<<sum<<endl;
    */
    // HOMEWORK:
    // Take input and find the sum of all even number:
    /*
        int x;
        cout<<"Enter Any Number:"<<endl;
        cin>>x;
        int num = 2;
        int sum  = 0;
        while(num<=x){
            sum = sum + num;
            num = num + 2;
        }
        //Done✅
        cout<<"Value Of Sum is "<<sum<<endl;
    */

    // FAHRENHEIT TO CELSIUS TABLE:
    //    double celsius,fahrenheit;
    //    cout<<"Enter The Temperature(F):";
    //    cin>>fahrenheit;
    //    celsius = 5.0/9.0*(fahrenheit-32);
    //    cout<<"Temperature(C):"<<celsius;

    // Prime Number:
    /*
        int x;
        cout<<"Enter Any Number:";
        cin >> x;
        int num = 2;
        while (num < x)
        {
            if (x % num == 0)
            {
                cout << " not Prime for:" << num<< endl;
            }

            else
            {
                cout << "Prime for:"<<num<<endl;
            }
            num = num + 1;
        }
    */
    /*
        int target;
        cout<<"Enter your target pattern:"<<endl;
        cin>>target;
        int running = 1;
        while(running<=target){
            int column = 1;
            while(column<=target){
                cout<<running;
                column = column + 1;
            }
            cout<<endl;
            running++;

        }
    */
    int m;
    cout << "Enter a Number:" << endl;
    cin >> m;
    if (m % 5 == 0 && m % 7 == 0)
    {
        cout << "Given number is divisible by 5 and 7 both" << endl;
    }
    else if (m % 5 == 0)
    {
        cout << "Given number is divisible by only 5" << endl;
    }
    else if (m % 7 == 0)
    {
        cout << "Given number is divisible by only 7" << endl;
    }
    else
    {
        cout << "Given number is Neither divisible by 5 nor 7 " << endl;
    }
    

    return 0;
}