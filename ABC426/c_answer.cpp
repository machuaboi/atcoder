#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i< n; ++i)

int main(){
    int n, q;
    cin>>n>>q;
    vector<int> cnt(n+1);
    for(int i =1; i<=n; i++) cnt[i] =1;

    int r = 0;
    rep(qi,q){
        int x, y;
        cin>>x>>y;
        int ans =0;
        while(r<=x) {
            ans += cnt[r];
            cnt[r] = 0;
            r++;
        }
        cnt[y] += ans;
        cout<<ans <<endl;
    }
    return 0;
}