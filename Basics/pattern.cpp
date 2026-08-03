#include <iostream>
using namespace std;
int main()
{
    // First Pattern------------------
/*
    int n; //How many rows want
    cout<<"How many rows you want to create pattern:"<<endl;
    cin>>n;
    int i = 1; //On which row we run
    while(i<=n){
        int j = 1; //for column
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
*/

    // Second Pattern------------------
/*
    int n;
    cout << "Enter any number for pattern:" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
*/

/*
    char ch;
    cout << "Enter any something:\n";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is lowercase\n";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "THis is Uppercase" << endl;
    }
    else if (ch >= '1' && ch <= '9')
    {
        cout << "This is Number" << endl;
    }
    else
    {
        cout << "This is an special Character" << endl;
    }
*/
    
    //Third Pattern------------------
/*
    int n;
    cout<<"Enter the required row:"<<endl;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        for(int j = 1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
        i = i+1;
    }
    //Time Complexity for this code is 0(n^2)
    //Because here two nested loop which run n times
    //Space Complexity for this code is 0(1)
*/

    //Forth Pattern------------------
/*
    int n;
    cout<<"Enter the required row:"<<endl;
    cin>>n;
    int i = 1;
    while(i<=n)
    {
        for(int j = 1;j<=n;j++){
            cout<<n-j+1;
        }
        cout<<endl;
        i = i+1;
*/
    //Fifth Pattern------------------
/*
    int n;
    cout<<"Enter the required Row:"<<endl;
    cin>>n;
    int i =1;
    int count = 1;
    while(i<=n)
    {
        int j =1;
        while(j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    } //Firstly Done by Me:
*/
    //Sixth Pattern------------------
/*
    int n;
    cout<<"Enter the required row:"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int column =1;
        while(column<=row)
        {
            cout<<"*";
            column++;
        }
        cout<<endl;
        row++;
    }
*/
    //Seventh Pattern------------------
/*
     int n;
    cout<<"Enter the required row:"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int column =1;
        while(column<=row)
        {
            cout<<row;
            column++;
        }
        cout<<endl;
        row++;
    }
*/
    //Eighth Pattern------------------Homework Question
/*
    int n;
    cout<<"Enter number for pattern:"<<endl;
    cin>>n;
    int row = 1;
    int count = 1;
    while(row<=n)
    {
        int column = 1;
        while(column<=row)
        {
        cout<<count<<" ";
        count++;
        column++;
        }
        cout<<endl;
        row++;
    }
*/
    
    //Ninth Pattern------------------
/*
    int n;
    cout<<"Enter number for pattern:"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int column = 1;
        int value = row;
        while(column<=row)
        {
            cout<<value<<" ";
            value++;
            column++;
        }
        cout<<endl;
        row++;
    }
*/

    //Ninth Pattern------------------
    //Second Method------------------Homework question
/*
    int n;
    cout<<"Enter number for pattern:"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int column = 1;
        while(column<=row)
        {
            cout<<row+column-1<<" ";
            column++;
        }
        cout<<endl;
        row++;
    }
*/
    //Tenth pattern------------------
/*
    int n;
    cout<<"Enter number for pattern:"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int column = 1;
        while(column<=row){
            cout<<(row-column+1)<<" ";
            column++;
        }
        cout<<endl;
        row++;
    }
*/
    //Eleventh Pattern------------------
/*
    int n;
    cout<<"Enter number for pattern:"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int column = 1;
        char ch = 'A'+row-1; //Mainly pattern dependent on row:
        while(column<=n)
        {
            cout<<ch;
            column++;
        }
        cout<<endl;
        row++;
    }
*/
//Apart from the formula,there is one more difference between the two codes;(Looping concept)
    //Twelfth Pattern------------------
/*
    int n;
    cout<<"Enter number for pattern:"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n){
        int column = 1;
        while(column<=n)
        {
            char ch = 'A'+column-1; //Mainly pattern dependent on Column:
            cout<<ch<<" ";     
            column++;
        }
        cout<<endl;
        row++;
    }
*/
    //Thirteenth Pattern------------------
/*
    int n;
    cout<<"Enter number for pattern:"<<endl;
    cin>>n;
    int row = 1;
    char start = 'A';
    while(row<=n)
    {
        int column = 1;
        while(column<=n)
        {
            cout<<start<<" ";
            start++;
            column++;
        }
        cout<<endl;
        row++;
    }
*/
    //Fourtenth Pattern------------------
    //Mathematically Calculated formula;
    //firstly use i+j-1 this satisy pattern as number 1 , 2 , 3
    //Then i+j-1 = 1 add 'A' -1 both side and we get a formula:
/*
    int n;
    cout<<"Enter number for pattern:"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int column = 1;
        while(column<=n){
            char ch = 'A'+row+column-2;
            cout<<ch<<" ";
            ch++;
            column++;
        }
        cout<<endl;
        row++;

    }
*/
    //Again Practice same pattern
/*
    int target;
    cout<<"Enter your target:"<<endl;
    cin>>target;
    int row = 1;
    while(row<=target)
    {
        int column = 1;
        while(column<=target)
        {
            char ch = 'A'+row+column-2;
            cout<<ch<<" ";
            column++;
            ch++;
        }
        cout<<endl;
        row++;

    }
*/
    //fifteenth Pattern------------------
/*
     int n;
     cout<<"Enter number for required pattern:"<<endl;
     cin>>n;
     int row = 1;
     while(row<=n){
         int col = 1;
         char ch = 'A'+row-1;
         while(col<=row)
         {
             cout<<ch<<" ";
             col++;
         }
         cout<<endl;
         row++;
     }
*/

     //Sixteenth Pattern------------------
/*
    int target;
    cout<<"Enter your target:"<<endl;
    cin>>target;
    int row = 1;
    char start = 'A';
    while(row<=target)
    {
        int column = 1;
        while(column<=row)
        {
            cout<<start<<" ";
            column++;
            start++;
        }
        cout<<endl;
        row++;
    }
*/
    //Seventeenth Pattern------------------
/*
    int n;
    cout<<"Enter your Target"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int column = 1;
        char ch = 'A'+row + column-2;
        while(column<=row)
        {
            cout<<ch<<" ";
            ch++;
            column++;
        }
        cout<<endl;
        row++;
    }
*/
    //Eighteenth Pattern------------------
    //Tough Question
    int n;
    cout<<"Enter Any Number:"<<endl;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int column = 1;
        char start = 'A'+n-row;
        while(column<=row)
        {
            cout<<start<<" ";
            start++;
            column++;
        }
        cout<<endl;
        row++;
    }


    return 0;
    }
