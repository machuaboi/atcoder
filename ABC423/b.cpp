#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int a=0;
    int b=0;
   
    cin>>N;
     int L[N];
    for(int i = 0; i<N;i++){
        cin>>L[i]; 
    }
    for(int i = 0; i<N;i++){
        if(L[i]!=1){
            a++;
        }else{
            break;
        }
    }
    for(int i = N-1; i>=0;i--){
         if(L[i]!=1){
            b++;
        }else{
            break;
        }
    }
   if(N-1-a-b>=0){
    cout<<(N-1-a-b);
   }else{
    cout<<0;
   }
    

}