#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n;
    string s;

    cin>>n>>s;
    if(n>=3&&s.substr(s.length()-3,s.length())=="tea"){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

}