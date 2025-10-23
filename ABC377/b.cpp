#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<string> s;
    int cnt =0;
    for(int i = 0; i<8; i++){
        string input;
        cin>>input;
        //cout<<input<<endl;
        s.push_back(input);
    }
    for(int i = 0; i<8; i++){
        int it  = s[i].find('#');
        if(it != string::npos){
            continue;
        }
        
        for(int k =0; k<8; k++){
            bool ok = false;
        for(int j = 0; j<8; j++){
            
            if(s[j].at(k) == '#'){ ok = true;
            break;
            };
        }
        if(ok==false) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}