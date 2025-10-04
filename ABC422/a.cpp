#include <bits/stdc++.h> 
using namespace std;
int main(){
    string s;
    cin>>s;
    int a, b;
    a = s.at(0)-48;
   //a = stoi(s.substr(0,1));

    //cout<<a;
    b = s.at(2)-48;
    if(b==8){
        s = to_string(a+1) + "-1";
        cout<< s;
    }else{
        s = to_string(a) +"-"+to_string(b+1);
        cout<<s;
    }

}