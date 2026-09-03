//Queue
#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<string> q;
    q.push("Rajat");
    q.push("Singh");
    q.push("Gaur");
    
    cout<<"Size Before pop:"<<q.size()<<endl;
    cout<<"First Element: "<<q.front()<<endl;
    q.pop();
    cout<<"Size After pop:"<<q.size()<<endl;
    cout<<"First Element: "<<q.front()<<endl;
 return 0;
}