#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c;
    
    b = (n/10)%10;
    a = n/100;
    c = n %(a*100+b*10);

    cout<<b<<c<<a<<" "<<c<<a<<b<<endl;
    return 0;
}