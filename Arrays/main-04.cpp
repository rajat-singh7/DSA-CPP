//Binary Search:
#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        //Go to right side part:
        if(key>arr[mid]){
            start = mid+1;
        }
        //Got to left side part:
        else
        {
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;

}
int main() {
    int even[8] = {2,4,6,8,10,12,14,16};
    int odd[5]  = {1,3,5,7,9};

    int evenIndex = BinarySearch(even,8,14);
    cout<<"Index of 14 is: "<<evenIndex<<endl;

    int oddIndex = BinarySearch(odd,5,3);
    cout<<"Index of 3 is: "<<oddIndex<<endl;
 return 0;
}