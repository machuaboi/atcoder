#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    int a = 1;
    int b = 1;
    int sum = 0;
    int ans[n + 1] = {1, 1, 0};
    for (int i = 2; i < n+2; i++)
    {
        int c = ans[i - 1];
        sum = 0;
        if (c > 10)
        {
            while (c > 0)
            {
                sum += c % 10;
                c /=10;
            }
            ans[i] = ans[i - 1] + sum;
        }
        else
        {
            ans[i] = ans[i - 1] + ans[i-1];
        }
    }
    cout<<ans[n]<<endl;

    return 0;
}