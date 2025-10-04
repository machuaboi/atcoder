#include <iostream>

using namespace std;

int main(){
    int n, l, r;
    cin>>n>>l>>r;
    int x[n], y[n];
    for(int i = 0; i<n; i++){
        cin>>x[i]>>y[i];
    }
    int cnt =0;
    for(int i = 0; i<n; i++)
        if(x[i]<=l && y[i]>=r) cnt++;
    
    cout<<cnt<<endl;
    
    
}