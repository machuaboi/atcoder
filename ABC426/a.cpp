#include <iostream>
using namespace std;
int main(){
    string x,y;
    cin>>x>>y;
    //o > s > l
    char a = x[0];
    char b = y[0];

    if(a==b){
        cout<<"Yes"<<endl;
        return 0;
    }
    
    if(b=='O'){cout<<"Yes"<<endl; return 0;}
        
    if(b == 'S'){
        if(a == 'O'){
            cout<<"No"<<endl;
            return 0;
        }else{
            cout<<"Yes"<<endl;
            return 0;

        }
    }
    cout<<"No"<<endl;
}