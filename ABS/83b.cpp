#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    long long ans =0;
    for(int i = 1; i<=n; i++){
        string s = to_string(i);
        int sum = 0;
        for(int j = 0; j<s.length(); j++){
            
            sum+=s[j] - '0';
        }
        if(a<=sum&& b>=sum) ans+=i;
    }
    cout<<ans<<endl;
    return 0;

}