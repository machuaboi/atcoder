#include <bits/stdc++.h> 
using namespace std;
// 108 5 102 .. 71.66
// 78 65 72
// 71 72 72
// 4  0 1 
int main(){
    int t;
    cin>>t;
    unsigned ans[t];
    unsigned a, b, c;
    for(int i =0; i<t;i++){
        cin>> a>>b>>c;
        ans[i] = min({a,c,(a+b+c)/3});
        // if(a>=1&&c>=1){
        //     if(a+b+c<3){
        //         ans[i]=0;
        //     }else if(b>=min(a,c)){
        //         ans[i]=min(a,c);
        //     }else{
        //                       if(  min(a,c)>=floor((a+b+c)/3)){
        //                          ans[i]= floor((a+b+c)/3);
        //                       }else{
        //                          ans[i]=min(a,c);
        //                       }

        //     }
        // }else{
        //                    ans[i]=0;

        // }
    }
    for(int i :ans){
        cout<<i<<endl;
    }

}