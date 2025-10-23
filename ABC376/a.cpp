#include <iostream>
using namespace std;

int main(){
    int n, c;
    cin>>n>>c;
    int t[n];
    for(int i = 0; i<n;i++){
        cin>>t[i];
    }
    int ans =0;
    int last = 0;
    for(int i = 0; i<n; i++){
        // if(i == 0){
        //     ans++;
        //     last = t[0];
        //     continue;
        // }
        if(t[i]>= last+c){
            last = t[i];
            ans++;
        }else{

        }
        
    }

    cout<<ans<<endl;
    return 0;
}