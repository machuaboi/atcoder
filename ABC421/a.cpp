#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    
    
    cin>>a;
    string b[a];
    for(int i =0; i<a; i++){
        cin>>b[i];
    }

    int r;
    cin>>r;
    string c;
    cin>>c;
    
    if(c == b[r-1]){
        cout<<"Yes";

    }
    else{
        cout<<"No";
    }

    

}