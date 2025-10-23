#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,q,a;
    char mode;
    cin>>n>>q;
    int ans = 0;
    int r = 2;
    int l = 1; 
    for(int i = 0; i<q;i++){ 
        cin>>mode;
        cin>>a;  
        if(mode=='R'){
            if(l<a &&  l>r){
                ans+= r + n -a;
            }else if(l>a && l<r){
                ans+= n-r+a;
            }else{
                 ans+= abs(a-r);
            }
            r = a;
            
        }else{
            //mode is L 
            if(r<a && l<r){
                ans += l+n-a;
            }else if(r>a && l>r){
                ans+=n-l+a;
            }else{ 
                ans += abs(a-l);
            }
            l = a;
        }
    }

    cout<<ans<<endl;
    return 0;

}