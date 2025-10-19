#include <cmath>
#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n;
    string s;
    cin>>n>>s;
    ll sum1=0,sum2=0,cnt=0;
    for(int i=0;i<n+n;i++){
        if(s[i]=='A') continue;
        cnt++;
        sum1+=abs(i - 2*(cnt-1));
        sum2+=abs(i - (2*(cnt-1)+1));

    }

    cout<<min(sum1,sum2)<<endl;
    
}

