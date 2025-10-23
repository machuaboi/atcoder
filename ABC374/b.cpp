#include <iostream>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int ans= 0;

    int sl = s.length();
    int tl = t.length();
    if(sl>tl){
        for(int i = 0; i<tl; i++){
            if(s[i]!=t[i]){
                ans=i+1;
                break;
            }
        }
       if(ans==0) ans = tl+1;
    }else if(sl<tl){
        for(int i =0; i<sl; i++){
            if(s[i]!=t[i]){
                ans=i+1;
                break;
            }
        }
       if(ans==0) ans = sl+1;
    }else{
        for(int i =0; i<sl; i++){
            if(s[i]!=t[i]){
                ans=i+1;
                break;
            }
        }
    }

    cout<<ans<<endl;

}