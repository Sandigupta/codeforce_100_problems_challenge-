#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int k1 = INT_MAX;

        int k2 = INT_MIN;
        vector<int> v;
        while (n)
        {
            int a, x;
            cin >> a >> x;

            if (a == 1)
            {

                k1 = x;
            }
            else if (a == 2)
            {
                k2 = x;
            }
            else if (a == 3)
            {
                v.push_back(x);
            }
            n = n - 1;
        }
        int cnt = (k2 - k1) + 1;
        if (k2 >= k1)
        {
            for (int i = k1; i <= k2; i++)
            {
                for (int j = 0; j < v.size(); j++)
                {
                    if (i == v[j])
                        cnt--;
                }
            }
            cout << cnt << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}