#include <iostream>
using namespace std;
int main()
{
    // First pattern
    //****
    //****
    //****
    //****
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // Second Pattern
    // //*
    // //**
    // //***
    // //****
    // //*****
    // int n;
    // cout << "enter the number:" << endl;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // // Third Pattern:
    // // 1
    // // 12
    // // 123
    // // 1234
    // // 12345
    // int x;
    // cout << "enter the value of x:" << endl;
    // cin >> x;
    // for (int i = 1; i <= x; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // // Fourth Pattern:
    // // 1
    // // 22
    // // 333
    // // 4444
    // // 55555
    // int a;
    // cout << "enter the value of a:" << endl;
    // cin >> a;
    // for (int i = 1; i <= a; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // // Fifth Pattern
    // //*****
    // //****
    // //***
    // //**
    // //*
    // int b;
    // cout << "enter the value of b:" << endl;
    // cin >> b;
    // for (int i = 1; i <= b; i++)
    // {
    //     for (int j = 1; j <= b - i + 1; j++)
    //     { // total-row+1
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // Sixth Pattern
    // // 12345
    // // 1234
    // // 123
    // // 12
    // // 1
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5 - i + 1; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // // Seventh pattern
    // //      *
    // //     ***
    // //    *****
    // //   *******
    // //  *********
    // int c;
    // cout << "enter the value of c:" << endl;
    // cin >> c;
    // for (int i = 0; i < c; i++)
    // {
    //     // spaces
    //     for (int j = 0; j < c - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     // stars
    //     for (int j = 0; j < 2 * i + 1; j++)
    //     {
    //         cout << "*";
    //     }
    //     // spaces:
    //     for (int j = 0; j < c - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // // Eighth Pattern
    // //*********
    // //  *******
    // //   *****
    // //    ***
    // //     *
    // int v;
    // cout << "enter the value of v:";
    // cin >> v;
    // for (int i = 0; i < v; i++)
    // {
    //     // spaces
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     // stars
    //     for (int j = 0; j < 2 * v - (2 * i + 1); j++)
    //     {
    //         cout << "*";
    //     }
    //     // spaces
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // // Nine Pattern:
    // //      *
    // //     ***
    // //    *****
    // //   *******
    // //  *********
    // //***********
    // //***********
    // //  *********
    // //   *******
    // //    *****
    // //     ***
    // //      *
    // // Combine Upper Patttern:
    // //  Nine Pattern
    // int g;
    // cout << "Enter the value of g: ";
    // cin >> g;
    // // Upper Pattern
    // for (int i = 0; i < g; i++)
    // {
    //     // Spaces
    //     for (int j = 0; j < g - i - 1; j++)
    //     {
    //         cout << " ";
    //     }

    //     // Stars
    //     for (int j = 0; j < 2 * i + 1; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // // Lower Pattern
    // for (int i = 0; i < g; i++)
    // {

    //     // Spaces
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     // Stars
    //     for (int j = 0; j < 2 * g - (2 * i + 1); j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    // //Tenth Pattern:
    // //*
    // //**
    // //*** 
    // //**** 
    // //***** 
    // //****
    // //***
    // //**
    // //*
    // int nn;
    // cout<<"Enter nn:";
    // cin>>nn;
    // for(int i = 1;i<=2*nn-1;i++){
    //     int stars = i;
    //     if(i>nn) stars = 2*nn-1;
    //     for(int j = 1;j<=stars;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // //eleven pattern:
    // //1
    // //01
    // //101
    // //0101
    // //10101
    // int k;
    // cout<<"enter the value of k:";
    // cin>>k;
    // for(int i = 0;i < k;i++){
    //     int start = 1;
    //     if(i%2==0) start = 1; //even row
    //     else start = 0;
    //     for(int j = 0;j<=i;j++){
    //         cout<<start;
    //         start = 1-start; //For flip the value of 0 1:
    //     }
    //     cout<<endl;
    // }

    //twelve pattern:
    //1       1
    //12     21
    //123   321
    //12344321
    // int l;
    // cout<<"enter the value of l:";
    // cin>>l;
    // for(int i = 1;i<=l;i++){
    //     //number
    //     for(int j = 1;j<=i;j++){
    //         cout<<j;
    //     }

    //     //space
    //     int space = 2*(l-i);
    //     for(int j = 1;j<=space;j++){
    //         cout<<" ";
    //     }

    //     //number
    //     for(int j = i;j>=1;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    //Pattern Thirteen:
    //1
    //2 3
    //4 5 6
    //7 8 9 10
    //11 12 13 14 15
    // int s;
    // cout<<"enter the value of s:";
    // cin>>s;
    // int num = 1;
    // for(int i = 1;i<=s;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<num<<" ";
    //         num += 1;
    //     }
    //     cout<<endl;
    // }

    //Pattern fourteen:
    //A
    //A B
    //A B C
    //A B C D
    //A B C D E
    // int f;
    // cout<<"Enter f:";
    // cin>>f;
    // for(int i = 0;i<=f;i++){
    //     char ch = 'A';
    //     for(int j = 1;j<=i;j++){
    //         cout<<ch<<" ";
    //         ch += 1;
    //     }
    //     cout<<endl;
    // }

    //Pattern Fifteen
    //A B C D E
    //A B C D
    //A B C
    //A B
    //A
    // int e;
    // cout<<"enter e:";
    // cin>>e;
    // for(int i = 1;i<=e;i++){
    //     char charcter = 'A';
    //     for(int j = 1;j<=(e-i+1);j++){
    //         cout<<charcter<<" ";
    //         charcter += 1;
    //     }
    //     cout<<endl;
    // }

    //Pattern sixteen
    //A
    //BB
    //CCC
    //DDDD
    // int x;
    // cout<<"enter the value of x:";
    // cin>>x;
    // for(int i = 0;i<x;i++){
    //     char val = 'A'+i;
    //     for(int j = 0;j<=i;j++){
    //         cout<<val<<" ";
    //      }
    //      cout<<endl;
    // }

    //Pattern seventeen:(Toughest One)
    //    A
    //   ABA
    //  ABCBA
    // ABCDCBA
    //ABCDEDCBA
    int p;
    cout<<"Enter p:";
    cin>>p;
    for(int i = 0;i<p;i++){
        //spaces
        for(int j = 1;j<=p-i-1;j++){
            cout<<" ";
        }
        //Alphabet
        char alph = 'A';
        int breakPoint = (2*i+1)/2;
        for(int j = 1;j<=2*i+1;j++){
            cout<<alph;
            if(j<=breakPoint) alph++;
            else alph--;
        }

        //spaces
        for(int j = 1;j<=p-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}