#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l = (s.length() + 1 )/ 2 ;
    cout<<s.substr(0,l-1)<<s.substr(l,l-1)<<endl;
}