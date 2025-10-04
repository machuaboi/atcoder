#include <bits/stdc++.h>
using namespace std;

/// H is tate W is yoko

int main()
{
    // string s;
    int h, w;
    cin >> h >> w;
    string s[h];
    char input[h][w];

    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            input[i][j] = s[i].at(j);
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            // i ==0
            //  i == h-1
            //  j == 0
            //  j == w-1
            if (input[i][j] == '.')
                continue;
            int c = 0;
            if (i == 0)
            {
                if (j == 0)
                {
                    if (input[i][j + 1] == '#' && input[i + 1][j] == '#')
                        continue;
                    else
                    {
                        cout << "No";
                        return 0;
                    }
                }
                else if (j == w - 1)
                {
                    if (input[i][j - 1] == '#' && input[i + 1][j] == '#')
                        continue;
                    else
                    {
                        cout << "No";
                        return 0;
                    }
                }
                else
                {
                    if (input[i][j - 1] == '#')
                        c++;
                    if (input[i][j + 1] == '#')
                        c++;
                    if (input[i + 1][j] == '#')
                        c++;
                    if (c != 2)
                    {
                        cout << "No";
                        return 0;
                    }
                    else
                    {
                        continue;
                    }
                }
            }else if (i == h - 1)
                {
                    if (j == 0)
                    {
                        if (input[i - 1][j] == '#' && input[i][j + 1] == '#')
                            continue;
                        else
                        {
                            cout << "No";
                            return 0;
                        }
                    }
                    else if (j == w - 1)
                    {
                        if (input[i][j - 1] == '#' && input[i - 1][j] == '#')
                            continue;
                        else
                        {
                            cout << "No";
                            return 0;
                        }
                    }
                    else
                    {
                        if (input[i][j - 1] == '#')
                            c++;
                        if (input[i][j + 1] == '#')
                            c++;
                        if (input[i - 1][j] == '#')
                            c++;
                        if (c != 2)
                        {

                            cout << "No";
                            return 0;
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
                else
                {
                    if (j == 0)
                    {
                        if (input[i - 1][j] == '#')
                            c++;
                        if (input[i + 1][j] == '#')
                            c++;
                        if (input[i][j + 1] == '#')
                            c++;
                        if (c != 2)
                        {
                            cout << "No";
                            return 0;
                        }

                        else
                        {
                            continue;
                        }
                    }
                    else if (j == w - 1)
                    {
                        if (input[i - 1][j] == '#')
                            c++;
                        if (input[i + 1][j] == '#')
                            c++;
                        if (input[i][j - 1] == '#')
                            c++;
                        if (c != 2)
                        {
                            cout << "No";
                        }

                        else
                        {
                            continue;
                        }
                    }
                    else
                    {
                        if (input[i - 1][j] == '#')
                            c++;
                        if (input[i + 1][j] == '#')
                            c++;
                        if (input[i][j - 1] == '#')
                            c++;
                        if (input[i][j + 1] == '#')
                            c++;
                        if (c == 2)
                            continue;
                        else if (c == 4)
                        {
                            continue;
                        }
                        else
                        {
                            cout << "No";
                            return 0;
                        }
                    }
                }
            }
        }
        cout << "Yes";
    }