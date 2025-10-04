#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t[4] = {"dream","dreamer","erase","eraser"};
    for(int i = 0; i<4; i++) reverse(t[i].begin(),t[i].end());
    reverse(s.begin(), s.end());
    bool can = true;

    for(int i = 0; i<s.size();) {
        bool can2 = false; 
        for(int j = 0; j<4; j++){
            string d = t[j];
            if(s.substr(i,d.size()) == d){
                can2 = true;
                i += d.size();
            }
        }
        if(!can2){
            can = false;
            break;
        }
    }


    if(can) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}