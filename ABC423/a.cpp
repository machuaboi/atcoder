#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, c, z;
    bool y =true;
    cin>>z>>c;
    x = z;
    if(z<1000){
        cout<<0;
        return 0;
    }
    while(y==true){
        //cout<<x<<endl;
       if(x-1000<1000){
        if(x-1000>c){
            cout<<1000;
            return 0;
        }else{
            cout<<0;
            return 0;
        }
       }
        if(x+ x*c/1000 <= z ){
            cout<<x;
           return 0;
        }else if(x<1000){
            cout<<0;
             return 0;
           
        }else{
             x= x-1000;
        }       
    }
}