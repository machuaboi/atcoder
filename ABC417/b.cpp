#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ans[100] = {0};
    vector<int> rem; 
    for(int i = 0; i<n; i++) cin>>ans[i];
    
    int a; 
    for(int i = 0; i<m; i++){
        cin>>a;
        rem.push_back(a);
    }
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<rem.size(); j++){
            if(ans[i]==rem[j]){
                ans[i] =0;
                rem.erase(rem.begin() + j);
                break;
            }
        }
            
    }

    for(int i = 0; i<n; i++){
        if(ans[i] == 0)continue;
        if(i == n-1) cout<<ans[i]<<endl;
        else cout<<ans[i]<<" ";
    }

}