#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    
    int j = -1;
    if(s.find('o')!=string::npos) j = s.find('o');
    else{
        cout<<-1<<endl;
        return 0;
    }
    int ans = -1, rank = -1;
    int b = n-j -1;
    while(b>1){
        if(s[++j]== 'o') rank++;
        else{
            ans = rank;
            
        }
        b--;
    }

    cout<<ans<<endl;
}