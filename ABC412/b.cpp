#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    for(int i = 1; i<s.length(); i++){
        char ch = s[i];
        if(isupper(ch)){
            if(t.find(s[i-1])== string::npos){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    cout<<"Yes"<<endl;
}

