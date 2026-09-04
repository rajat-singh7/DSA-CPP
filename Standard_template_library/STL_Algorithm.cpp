//Algorithm
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    //Finding an element:
    cout<<"finding 6--> "<<binary_search(v.begin(),v.end(),4)<<endl;

    cout<<"Lower Bound--> "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"Upper Bound--> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a = 3;
    int b = 4;
    cout<<"Max: " <<max(a,b)<<endl; //4
    cout<<"Min: " <<min(a,b)<<endl; //3

    //Swaping the elements value:
    swap(a,b);
    cout<<endl<<"a--> "<<a<<endl;
    cout<<endl<<"b--> "<<b<<endl;

    //Reverse the string:
    string s = "abcd";
    reverse(s.begin(),s.end());
    cout<<"Reversed String is: "<<s<<endl;

    //Rotate:
    rotate(v.begin(),v.begin()+2,v.end()); //how many elements rotate write in middle:
    cout<<"After rotate "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;





 return 0;
}