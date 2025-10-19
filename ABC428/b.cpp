#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){ 
    string s;
    int n, k;
    cin>>n>>k>>s;
    map<string,int> a; 
    for(int i = 0; i<=s.length()-k; i++){
        a[s.substr(i,k)]++;
    }
    int max = 0;
    for(const auto& j: a){
        if(j.second>max) max = j.second;
    }
    cout<<max<<endl;
    vector<string> ans;
    for(const auto& x: a){
        if(x.second==max) ans.push_back(x.first); 
    }
    for(int i = 0; i<ans.size();i++){
        if(i == ans.size()-1){ cout<<ans[i]<<endl;}else{
            cout<<ans[i]<<" ";
        }
    }
    return 0;
}