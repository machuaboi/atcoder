#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int c[n+1];
    int r[n+1];
    for(int i  = 1; i<=n; i++){
        cin>>c[i];
    }

    for(int i  = 1; i<=n; i++){
        cin>>r[i];
    }
    
    // if no one played the colour of t; then player 1 colour is picked as 
    int ans =0;
    int pos =0;
    int maxN = 0;
    for(int i = 1; i<=n;i++){
        if(c[i] == t){
           if(maxN<r[i]){
            maxN=r[i];
            pos = i;   
           }  
        }

    }

    if(pos==0){
        t = c[1];
         for(int i = 1; i<=n;i++){
        if(c[i] == t){
           if(maxN<r[i]) {
            pos = i; 
            maxN=r[i];
           }
        }
    }
    cout<<pos<<endl;
    }
    else{
        cout<<pos<<endl;
    }

    

}