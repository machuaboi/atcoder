#include <iostream>
#include <set>
using namespace std;

int main(){
    string s;
    cin>>s;
    char maj = s[0];
    char min = '-';
    for(int i = 1; i<=s.length()-1; i++){
        if(s[i]!= maj) min = s[i];
    }
    int cnt = 0;
    for(int i = 0; i<3; i++){
        if(maj == s[i]) cnt++; 
    }
    if(cnt==1){
        cout<<maj<<endl;
        return 0;
    }
    cout<<min<<endl;
    
}