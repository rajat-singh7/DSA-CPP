#include <iostream>
using namespace std;

//Macros
#define PI 3.14159

//Creating a inline function:
inline int getMax(int a,int b){
    return (a>b)?a:b;
}

//default arg:
void print(int arr[],int n,int start = 0){
    for(int i = start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
//If we set start = 0;this will always start with 0; if no value of start will be pass

int main() {
    //concept of macros:
    double radius = 5;
    double area = PI * radius * radius;

    cout << "Area: " << area << endl;
    //Concept of inline function
    int a = 1, b = 2;
    int ans = 0;
    ans = getMax(a,b);
    cout<<ans<<endl;
    a = a+3;
    b = b+1;
    ans = getMax(a,b);
    cout<<ans<<endl;

    //Default arg
    int arr[5] = {2,5,7,1,9};
    int size = 5;
    print(arr,size);
    cout<<endl;
    print(arr,size,3);
    return 0;
}