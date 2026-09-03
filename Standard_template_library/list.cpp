//List
#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> l;
    list<int> n(5,1200);
    cout<<'Printing n '<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;


    l.push_back(5);
    l.push_front(10);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    /*
        l.pop_back();
        l.pop_front();
        cout<<l.size();
    */

    // Erase Function:
    cout << "Before erase size: " << l.size() << endl;
    l.erase(l.begin(), l.end());
    cout << "After erase size: " << l.size() << endl;


 return 0;
}