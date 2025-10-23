#include <iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    if(n<3){cout<<0<<endl;
    return 0;}
    int cnt =0;
    for(int i = 0; i<n-2; i++){
        if(s[i]== '#'){
            if(s[i+1]=='.'&&s[i+2]=='#'){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}