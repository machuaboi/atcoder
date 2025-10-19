#include <iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    int cnt =0;
    for(int i = 0; i<n;i++){
        if(s[i] =='|') cnt++;
        
        if(s[i] == '*' ){
            if(cnt==1)   cout<<"in"<<endl;
            else cout<<"out"<<endl;
            return 0;
        }
        
    }
    return 0;
    
}