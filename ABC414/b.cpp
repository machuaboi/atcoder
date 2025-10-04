#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    unsigned long long  l[n];
    char ch[n];
    unsigned long long sum = 0;
   for(int i = 0; i<n; i++)
    {
        cin >> ch[i];
        unsigned long long input;
        cin>>input;
        
        if(input<101) {
            sum+=input;
            if(sum<101)
                l[i] = input;
            else{
                cout<<"Too Long"<<endl;
                return 0;
            }
            
        }else{
             cout<<"Too Long"<<endl;
            return 0;
        }
        
        
    }
    string ans;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<l[i]; j++) ans+=ch[i];
    }
    cout<<ans<<endl;
}