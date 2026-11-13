#include<iostream>
using namespace std;
int main(){
    //First pattern
    //****
    //****
    //****
    //**** 
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //Second Pattern
    //*
    //**
    //***
    //****
    //*****
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    for(int i  = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    //Third Pattern:
    //1
    //12
    //123
    //1234
    //12345
    int x;
    cout<<"enter the value of x:"<<endl;
    cin>>x;
    for(int i = 1;i<=x;i++){
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    //Fourth Pattern:
    //1
    //22
    //333
    //4444
    //55555
    int a;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

    //Fifth Pattern
    //*****
    //****
    //***
    //**
    //*
    int b;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
    for(int i = 1;i<=b;i++){
        for(int j = 1;j<=b-i+1;j++){ //total-row+1
            cout<<"*";
        }
        cout<<endl;
    }

    //Sixth Pattern
    //12345
    //1234
    //123
    //12
    //1
    for(int i = 1;i<=5;i++){
        for(int j = 1;j<=5-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}