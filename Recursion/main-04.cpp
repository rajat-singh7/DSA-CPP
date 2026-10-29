#include<iostream>
using namespace std;
void Reverse(string &str,int i ,int j){  //Pass By reference
    cout<<"Call Received for "<<str<<endl;
    //base case:
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    //recursive call:
    Reverse(str,i,j);
}
int main() {
    string str = "rajat";
    cout<<endl;
    Reverse(str,0,str.length()-1);
    cout<<endl;
    cout<<str<<endl;
 return 0;
}