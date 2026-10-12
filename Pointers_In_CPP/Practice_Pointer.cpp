#include <iostream>
using namespace std;

void update(int *p){
    *p = (*p)*2;
}

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

    //Predict the output:
    int arr[5] = {23,45,16,67,2};
    cout<<*(arr)<<" "<<*(arr+1)<<endl; //23 45
  
    //PREDICT THE OUTPUT:
    int arr[6] = {11,12,13};
    cout<<arr<<" "<<&arr<<endl; //Address of first element

    //Predict the output:
    int arr[6] = {11,12,13};
    cout<<(arr+1)<<endl; //adress of second
 
    //predict the Output:
    int arr[6] = {23,26,29};
    int *p = arr;
    cout<<p[2]<<endl;   // Output is 29 p[2] == *(p+2)

    //Predict the output:
    int arr[] = {2,5,6,1,8,9};
    cout<<*arr<<" "<<*(arr+3)<<endl; // 2 1

    //Predict The Output:
    char ch = 'A';
    char *ptr = &ch;
    ch++;
    cout<<*ptr<<endl;  //The *ptr is Pointing the Box in which A is stored so the output is B

    //Predict The Output:
    char ch[] = "abcde";
    char *ptr = &ch[0];
    cout<<ptr<<endl; //Cout in char array is working the differntly so the whole array is print:

    //Predict the output:
    char arr[] = "ABCDE";
    char *p = &arr[0];
    p++;
    cout<<p<<endl; //BCDE

    //Predict the output:
    char str[] = "rajat";
    char *p = str;
    cout<<str[0]<<" "<<p[0]<<endl;  // r r

    //Predict the output:
    //for this we make a function upper of the code:
    int i = 10;
    update(&i);
    cout<<i<<endl; //20
    //good question:
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout<<first<<" "<<second<<endl; //111 119
*/
    //Another one:
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout<<first<<" "<<second<<endl;



    
    return 0;
}