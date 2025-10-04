#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_set<char> charcter;
    for(int i =0;i <s.size() ;i++){
        charcter.insert(s.at(i));
    }
    
    for(char i = 'a'; i<='a'+26; i++ ){
        if(charcter.find(i)== charcter.end()){
            cout<<i;
            return 0;
        }
    }
    return 0;
        
}