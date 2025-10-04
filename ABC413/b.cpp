#include <iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i = 0; i<n; i++) cin>>s[i];
    set<string> ans;
    for(int i = 0;i<n-1; i++){
       
        for(int j = i+1; j<n; j++){
             string a ="";
        string b = "";
             a+= (s[i]+ s[j]);
        b+= (s[j] + s[i]);
        ans.insert(a);
        ans.insert(b);
        }
       
    }
   // for(string ss : ans) cout<<ss<<endl;
    cout<<ans.size()<<endl;
}