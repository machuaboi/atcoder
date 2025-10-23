#include <iostream> 
#include <set> 
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> ch; 
    ch.insert(s[0]);
    ch.insert(s[1]);
    ch.insert(s[2]);

    bool yes = false;
    bool a = false;
    bool b = false;
    bool c = false;
    for(char cn: ch){
     if(cn == 'A') a = true;
     if(cn == 'B')  b = true;
     if(cn == 'C')   c = true;
    }
   // cout<<a<<b<<c<<endl;
    yes = a&&b&&c;
    if(yes) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;

}