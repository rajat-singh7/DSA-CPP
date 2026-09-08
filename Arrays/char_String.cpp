// Char String:
#include <iostream>
using namespace std;
bool checkpalindrome(char name[],int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        if(name[start]!=name[end]){
            return 0;
        }
        else{
            return 1;
            start++;
            end--;
        }
    }
}
void reverse(char name[],int n){
    int start = 0;
    int end  = n-1;
    while(start<=end){
        swap(name[start++],name[end--]);
    }
}
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) //Think why we use '\0':
    {
        count++;
    }
    return count;
}



int main()
{
    char name[10];
    cout << "enter your name: " << endl;
    cin >> name;
    // After space,tab,enter char string stops:
    cout << "Your name is: ";
    cout << name << endl;

    // finding the length of char array:
    int len = getLength(name);
    cout << "Length: " << len<<endl;
    reverse(name,len);
    cout << "Your name is: " <<reverse <<endl;
    cout<<name;
    cout<<"Palindrome or Not: "<<checkpalindrome(name,len);

    return 0;
}