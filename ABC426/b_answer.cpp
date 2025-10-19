#include <iostream>
#include <map>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int> cnt;
    for(char c: s) cnt[c]++;
    for(auto [c,num] : cnt ){
        if (num==1) cout<<c<<endl;
    }
    return 0;
}