#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans;
    bool ok = true;
    int n = s.length();
    for(int i =0; i<n; i++){
       char ch =  s[i];
       if(ch == '#'){
        ans+='#'; 
        ok = true; 
        continue;
       }
       if(ch== '.'&& ok){
        ok = false;
        ans+= 'o';
       }else{
        ans+= '.';
       

       }


    }
    cout<<ans<<endl;
    return 0;
}