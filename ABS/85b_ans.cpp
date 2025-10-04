#include <iostream>
using namespace std; 

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int ans = 0;
    for(int i = 1; i<=n; i++){
        int c = i;
        int sum = 0;
        while(c>0){
            sum+=c%10;
            c/=10;
        }
        if(sum>=a&& sum<=b){
ans+=i;

        } 
    }    
    cout<<ans<<endl;
}