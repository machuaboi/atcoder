#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int pro = a*b;
    (pro%2==0) ? cout<<"Even"<<endl : cout<<"Odd"<<endl;
    return 0;
}