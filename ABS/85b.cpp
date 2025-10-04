#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> a;
    int b;
    for(int i = 0; i<n; i++){
        cin>>b;
        a.insert(b);
    }  
    cout<<a.size()<<endl;
    return 0;

}