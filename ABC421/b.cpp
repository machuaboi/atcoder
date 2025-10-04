//x = 13 f(x) = 31
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    long long X, Y, A;
    string a;
    cin>>X>>Y;
    for(int i = 0; i<=8; i++){
      //  cout<<A<<endl;
        A = X + Y;
        if(A>=10){
            a = to_string(A);
            reverse(a.begin(), a.end());
            A = stoll(a);
        }   
        X = Y;
        Y = A;
    }
   //cout<<endl;
    cout<<X<<endl;

}
// int main(){
//     string X, Y;
//     string x, y;
//     int XX, YY;
//     int A;
//     cin>>X;
//     cin>>Y;

//     for(int i = X.length()-1; i>=0;i--){
//        // cout << X[i];
//         x+=X[i];
//     }
//   //  cout<<x;

//     for(int i = Y.length()-1; i>=0;i--){
//         y+=Y[i];
//     }
//     //cout<<y;
    

//     XX = stoi(x);
//     YY = stoi(y);
    

//     A=XX+YY;    
//     for(int i = 0; i<7; i++){
//         if(i%2==0){
//             XX=A+YY;
//         }else{
//             YY=A+XX;
//         }
//     }

//     cout<<XX <<endl;
//     cout<<YY;
// }