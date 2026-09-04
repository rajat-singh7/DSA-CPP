// Map:
#include<iostream>
#include<map>
using namespace std;
int main() {
    map<int,string> m;
    //Output in sorted way:
    m[1] = "Rajat";
    m[2] = "Singh";
    m[3] = "Gaur";
    
    m.insert({5,"bheem"});
    cout<<"Before erase:"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //Erase Function:
    m.erase(3);
    cout<<"After erase:"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }


    cout<<"Finding 13--> "<<m.count(13)<<endl;

 return 0;
}