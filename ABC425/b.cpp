#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int c = 0;
    cin >> N;
    vector<int> A(N);
    vector<int> ans(N);

    unordered_set<int> mySet;
    unordered_set<int> not_appe;
    bool isTrue = false;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;

        if (a == -1)
        {
            c++;
        }
        A.at(i) = a;
        not_appe.insert(i + 1);
    }
    // if hash

    mySet.insert(A.begin(), A.end());

    // for (int i : mySet)
    // {
    //     cout << i << endl;
    // }

    // mySet.erase(mySet.begin(), mySet.find(0));
    for (int x : mySet)
    {
        not_appe.erase(x);
    }

    //  for(int i: not_appe){
    //     cout<<i<<endl;
    // }

    for (int i = 0; i < N; i++)
    {
        if (A.at(i) == -1)
        {

            int it = *not_appe.begin();
            // cout << "it " << it << endl;
            A.at(i) = it;
            not_appe.erase(it);
        }
    }


    if (not_appe.size()!=0){
        cout<<"No";
        return 0;
    }
    
    


    cout << "Yes" << endl;
    for (int i : A)
    {
        cout << i << " ";
    }
}