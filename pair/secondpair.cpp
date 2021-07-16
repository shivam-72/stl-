#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        pair<int, int> b[n];
        if (n % 2 == 0)
        {
            for (int i = 0; i < (n / 2); i++)
            {
                b[i] = {a[i], a[n - i - 1]};
            }
        }
        else
        {
            for (int i = 0; i < (n + 1) / 2 + 1; i++)
            {

                b[i] = {a[i], a[n - i - 1]};
                if (i = (n - 1) / 2)
                {
                    b[i] = {a[i], a[i]};
                }
            }
        }
        /* if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << b[i].first << " " << b[i].second << " " << endl;
            }
        }
        else
        {*/
        for (int i = 0; i < (n + 1) / 2; i++)
        {
            cout << b[i].first << " " << b[i].second << " " << endl;
        }
    }
    return 0;
}