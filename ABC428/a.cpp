#include <iostream>
using namespace std;

int main(){
  int s,a,b,x;
  cin>>s>>a>>b>>x;
    int ans = 0;
    while(true){
        for(int i = 0; i<a; i++){
            ans+=s;
            x--;
            if(x == 0){
                cout<<ans<<endl;
                return 0;
            }
            
        }
        for(int j = 0; j<b; j++){
            x--;
              if(x == 0){
                cout<<ans<<endl;
                return 0;
            }
        }
       
    }
 return 0;
}