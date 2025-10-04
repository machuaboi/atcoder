#include <bits/stdc++.h>
using namespace std;
// you don't count when you found (0, 0), but instead count at the end
int main(){
    int N;
    cin>>N;
    vector<vector<int>>G(N+1);//put each skill's neighbours 
    for(int i=1;i<=N;i++){
		int a,b;
		cin >> a >> b;
		G[a].push_back(i);
		G[b].push_back(i);
	}
    vector<bool> visited(N+1);
    visited[0] = true;
    //use depth first search (recursively) O(N)
    auto dfs = [&](auto self, int v) -> void{
        visited[v] = true; 
        for(auto vv: G[v])
            if(!visited[vv]){
                self(self,vv);
            }

    };

    dfs(dfs,0);//start with 0 

    int ans = 0;
    for(auto x: visited)
        ans+=x;
    
    cout<<ans-1<<endl;
    

        






}