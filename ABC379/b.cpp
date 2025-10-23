#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int cnt = 0;

    string h(k, 'O');
    string g(k,'X');

    //cout<<h<<endl;
    bool a = true;
    while (a)
    {

        if (s.find(h) != string::npos)
        {
            cnt++;
            s.replace(s.find(h),k,g);
           // cout<<cnt<<endl;
        }else{
            a = false;
        }
    }

    cout << cnt << endl;
    return 0;
}