#include <iostream>
#include <vector> 
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> a;
    for(int i = 0; i<n; i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    for(int i = 0; i<n; i++){     
        a.push_back(a[i]);
    }
  //  for(int i: a) cout<<i<<endl;
    int type, first=0;
    for(int k = 0; k<q; k++){
        cin>>type;
        if(type==1){
            int c;
            cin>>c;
           if(c%n!=0) 
           {if(first ==0) first = c%n;
            else first = c%n -1;}
           
            //cout<<"now first is "<<first<<endl;
        }else{
            //type 2
            int sum = 0;
            int l,r;
            cin>>l>>r;
            l-=1;
            r-=1;
            for(int i =(first+l); i<first + r + 1; i++) sum+=a[i];
            cout<<sum<<endl;
        }
        
    }
    return 0; 
}