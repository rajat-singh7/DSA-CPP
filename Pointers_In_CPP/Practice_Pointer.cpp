#include <iostream>
using namespace std;

int main() {
    //PREDICT THE OUTPUT:
/*
    int arr[] = {10, 20, 30};
    int *p = arr;

    cout << *p << endl;       //10
    cout << *(p + 1) << endl; //20
    cout << *(p + 2) << endl; //30
    cout << *p + 1 << endl;   //11

    //PREDICT THE OUTPUT:
    //Explain also:
    int a = 20;
    int *pt = &a;

    cout << a << endl;
    cout << *pt << endl;

    *pt = 50;

    cout << a << endl;

    //Predict the Output:
    int b = 5;
    int *pp = &b;

    *pp = *pp + 10;
    cout << b << endl;

    b = b * 2;
    cout << *pp << endl;

    int arr[] = {10, 20, 30};
    int *p = arr;

    cout << *p << endl; //10
    p++;
    cout << *p << endl; //20
    (*p)++;
    cout << *p << endl; //21
 
    //Predict the Output:
    int first = 18;
    int second = 20;
    int *ptr = &second;
    *ptr = 35;
    cout<<first<<" "<<second<<endl; 
    //the Output will be 18 35:

    //Predict the output:
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout<<"first is: "<<first<<endl; //7

    //predict the output:
    int first = 8;
    int *ptr = &first;
    cout<<(*ptr)++<<endl;  //Post increment
    cout<<first<<endl;
    //8
    //9

    //PREDICT THE OUTPUT:
    int first = 8;
    int second = 11;
    int *third = &second;
    first= *third;
    *third = *third+2;
    cout<<first<<" "<<second<<endl; //11 13

    //PREDICT THE OUTPUT:
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout<<*ptr<<" "<<f<<" "<<p<<endl; // 21.5 21.5 21.5

    //Predict the output:
    int arr[5];
    int *ptr;
    cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl; // 20 8
*/ 
    //Predict the output:
    int arr[5] = {23,45,16,67,2};
    cout<<*(arr)<<" "<<*(arr+1)<<endl; //23 45
    
    return 0;
}