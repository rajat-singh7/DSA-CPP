//Array function:
#include<iostream>
using namespace std;
void print(int *p){
    cout<<p<<endl; //address
    cout<<*p<<endl; //value
}

void update(int *p){
    //p = p+1---> This will not make any change 
    //but
    *p = *p+1; //This increment the value
}

int getSum(int *arr,int n){  //arr[] == *arr(pointer)
    cout<<"Size is: "<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += i[arr];
    }
    return sum;
}
int main() {
/*
    int value = 5;
    int *p = &value;
    print(p); //call the function
    cout<<"Before "<<*p<<endl;
    update(p);
    cout<<"after "<<*p<<endl;
*/
    int arr[5] = {2,5,7,3,9};
    cout<<"the Sum of array is: "<<getSum(arr,5); //Sum of entire array
    cout<<"the Sum of array is: "<<getSum((arr)+3,2); //sum of some part of array   
    
    return 0;
}