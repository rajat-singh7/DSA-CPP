//Stack
#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> s;
    s.push("Rajat");
    s.push("Singh");
    s.push("Gaur");
    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element: "<<s.top()<<endl;
    cout<<"Size of Stack: "<<s.size()<<endl;
    cout<<"Stack is empty or not: "<<s.empty()<<endl;


 return 0;
}