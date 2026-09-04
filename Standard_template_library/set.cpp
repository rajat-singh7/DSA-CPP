//Set:
#include<iostream>
#include<set>
using namespace std;
int main() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
   for(auto i:s){
    cout<<i<<" ";
   }
   cout<<endl;
   // Set Print the Value Only one time:

   s.erase(s.begin()); //This Remove Begin element which is 1:
   for(auto i:s){
    cout<<i<<" ";
   }
   cout<<endl;

   // Number is Present in set or not:
   cout<<"5 is present in set----> "<<s.count(5)<<endl; //Return Bool type 

   //Insert,find,erase,count all have O(logn) time complexity:
   //size,begin,empty all have O(1) time complexity: 
 return 0;
}