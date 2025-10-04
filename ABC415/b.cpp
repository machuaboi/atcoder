#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> ans;
    int cnt =0;
    for(int i = 0; i<s.length(); i++){
        if(s[i] != '.')
            ans.push_back(i+1);
    }
    for(int i = 0; i<ans.size(); i++){
        if(i%2!=0) cout<<","<<ans[i]<<endl;
        else cout<<ans[i];
    }
}