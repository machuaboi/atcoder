#include <iostream>
using namespace std;

int main(){
    int n, q;
    cin>>n>>q;
    int os[n+1] = {0};
    for(int i = 1; i<=n; i++) os[i]= i;

    int cnt;
    int a, b;
    int k = 0;
    int r = 0;
    for(int i = 0; i<q; i++){
        cnt = 0;
        cin>>a>>b;
        if(os[a]>0){
            cnt+=os[a];
           
        }else{
            cout<<0<<endl;
            continue;
        }
    
        //os[b]+=cnt;
        for(int j = k;j<b; j++){
            //if(os[j]<=cnt){os[j]=0; continue;}
            os[j]-=cnt;
        }
        
        if(a>k) k= a;
        cout<<cnt<<endl;
       // for(int i = 1; i<=n; i++) cout<<i<<":"<<os[i]<<" ";
       // cout<<endl;
    }
    return 0;

}