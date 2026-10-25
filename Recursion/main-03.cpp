#include<iostream>
using namespace std;

//check an array is sorted or not by recursion:
bool isSorted(int *arr,int size){
    //base case:
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0]>arr[1]) return false;
    else{
        bool remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}

//Sum of all elements in an array using recursion:
int GetSum(int *arr1,int size1){
    //Base case:
    if(size1==0){
        return 0;
    }
    if(size1==1){
        return arr1[0];
    }
    int remainingPart1 = GetSum(arr1+1,size1-1);
    int sum = arr1[0]+remainingPart1;
    return sum;
}

//Linear search:
bool LinearSearch(int *array,int SIZE,int key){
    //base case:
    if(SIZE==0) return false;
    if(array[0]==key) return true;
    else{
        int remainPart = LinearSearch(array+1,SIZE-1,key);
        return remainPart;
    }
}

//Binary search:
bool BinarySearch(int *arrayy,int s,int e,int keyy){
    //Base case:
    //when element is not found: 
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    cout<<"The value of Mid is:"<<arrayy[mid]<<endl;
    //when element is found:
    if(arrayy[mid]==keyy){
        return true;
    }
    //recursive function:
    if(arrayy[mid]<keyy){
        return BinarySearch(arrayy,mid+1,e,keyy);
    }
    else{
        return BinarySearch(arrayy,s,mid-1,keyy);
    }
}
int main() {
    int arr[5] = {2,3,5,8,10};
    int size = 5;
    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"Array is sorted\n";
    }
    else{
        cout<<"Array is Not sorted\n";
    }

    //Second Question:
    int arr1[5] = {2,7,8,9,10};
    int size1 = 5;
    int sum = GetSum(arr1,size1);
    cout<<"Sum is: "<<sum<<endl;

    //third Question:
    int array[10] = {2,6,5,8,9,10,2,3,17,1};
    int SIZE = 10;
    int key = 8;
    bool answer = LinearSearch(arr,SIZE,key);
    if(answer){
        cout<<"Key is Present"<<endl;
    }
    else{
        cout<<"Key is Not present"<<endl;
}

    //Fourth Question Binary search:
    int arrayy[10] = {1,2,3,4,5,6,7,8,9,10};
    int sizee = 10;
    int keyy = 10;
    cout<<"Present or Not:"<<BinarySearch(arrayy,0,9,keyy);


 return 0;
}