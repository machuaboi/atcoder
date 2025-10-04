#include <bits/stdc++.h> 
using namespace std;

int main(){
    
    string s;
    long double t = 0.0000000000000f;
    int x,y;
    cin>>s;
    
    
    if(s.find('t')&&s.length()>=3){
        y = s.find_last_of('t');
        x =s.find_first_of('t');
        if(x!=y){
            int a =0;
            for(int i = 0; i<s.length(); i++){
                if(s[i]=='t'){
                    a++;
                }
            }
            // cout<<a<<endl;
            // cout<<y<<endl;
            // cout<<x<<endl;
            t = (long double)(a-2)/(long double)((y-x+1)-2);
        }else{
            t = 0.0;
        }

        
    }else{
        t = 0.0;
    }
    cout<<setprecision(15)<<t;
    


}