#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,l,r;
    string s;
    cin>>n>>l>>r>>s;

    if(s.substr(l-1,r-l+1).find('x')== string::npos) cout << "Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;


}