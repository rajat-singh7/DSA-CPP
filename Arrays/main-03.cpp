// Maximum and Minimum Values in an array:
#include <iostream>
#include <numeric>
using namespace std;
// Function for Minimum Value:
int getMin(int nums[], int size)
{
    int min = INT_MAX; // start min with greatest value
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
        }
    }
    // returning min value
    return min;
}

// Function for Maximum Value:
int getMax(int nums[], int size)
{
    int max = INT_MIN; // start max with smallest value
    for (int i = 0; i < size; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
        // we also use this in place of this second loop:
        // maximium = max(maximum,nums[i])
    }
    // returning max value
    return max;
}

// LINEAR SEARCH:
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

//Reverse an array
void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void Printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cout << "Please enter the size for an array:" << endl;
    //cin >> size;
    int nums[10];

    // taking the input in an array
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    cout << "Maximum value is: " << getMax(nums, size) << endl;
    cout << "Minimum value is: " << getMin(nums, size) << endl;

    // Homework Question to print the sum of all element in an array:
    int arr2[5] = {2, 4, 6, 2, 5};
    int sum = std::accumulate(arr2, arr2 + 5, 0);
    cout << "Sum of all Elements of array is :" << sum << endl;

    int arrays[10] = {2, 4, 5, 6, 2, 2, 1, 4, 21, 3};
    int add = std::accumulate(arrays, arrays + 10, 0);
    cout << "The sum Of Array is: " << add << endl;

    // Linear Search:

    int number[5] = {2,4,6,2,5};
    for(int i=0;i<5;i++){
        if(number[i]==5){
            cout<<"5 is Present"<<endl;
            break;
        }
    }
    

    //second example
    int arr[10] = {2, 4, 1, 6, 8, 9, -5, -17, 9, 0};
    int key;
    cout << "enter your key:" << endl;
    cin >> key;
    int found = search(arr, 10, key);
    if (found)
    {
        cout << "Key is Present" << endl;
    }
    else
    {
        cout << "Key is Absent" << endl;
    }

    //Reverse An Arrays
    int brr[5] = {3,4,6,1,9};
    reverse(brr,5);
    Printarray(brr,5);
    return 0;
}