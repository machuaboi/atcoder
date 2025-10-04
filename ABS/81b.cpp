#include <iostream>
using namespace std;

int main(){
    int n;
    
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];
    int cnt = 0;
    bool ok = true;
    while(ok){
        for(int i = 0; i<n; i++){
            
            if(a[i]%2!=0) {
                ok = false;
                cnt--;
                break;
            }
            a[i]/=2;
        }
        cnt++;
        
    }
    cout<<cnt<<endl;
}