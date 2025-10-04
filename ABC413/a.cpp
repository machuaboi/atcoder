#include <iostream>
using namespace std;

int main(){
    int sum =0,n,m;
    cin>>n>>m;
    for(int i = 0; i<n; i++){
        int a; 
        cin>>a;
        sum+=a;
        if(sum>m){
            cout<<"No"<<endl;
            return 0;
        }
        
    }
    cout<<"Yes"<<endl;
}