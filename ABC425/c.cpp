#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,Q;
    cin>>N>>Q;
    vector<int> A;
   //  vector<int> Q(N);
    for(int i=0; i<N;i++){
        int a = 0;
        cin>>a;
        A.push_back(a);
    }

    for(int i=0; i<Q; i++){
        int oort =0;
        cin>> oort;
        if(oort==1){
            int c=0;
            cin>>c;
            
            for(int k = 0; k<c; k++){
                A.push_back(*A.begin());
                A.erase(A.begin());
            }
        }else{
            //2
            int l,r;
           
            int sum =0;
            cin>>l>>r;
            // for(int ind: A){
            //     cout<<ind<<" ";
            // }
            for(int j= l; j<=r; j++){
                sum+=A.at(j-1);
            }
            cout<<sum<<endl;

        }
    }
    
    return 0;
}