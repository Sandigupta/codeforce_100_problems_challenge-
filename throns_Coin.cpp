#include <bits/stdc++.h>
using namespace std;

int f(vector<char> v, int n)
{

    int i = 0;
    for (i = 1; i < n; i++)
    {
        if (v[i] == '*' && v[i + 1] == '*')
        {
            return i;
        }
    }
    return i;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<char> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int idx = f(v, n);
        int coin = 0;
        for (int j = 0; j < idx; j++)
        {
            if (v[j] == '@')
                coin++;
        }
        cout << coin << endl;
    }
}