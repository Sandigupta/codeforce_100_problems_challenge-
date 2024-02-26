#include <bits/stdc++.h>
using namespace std;

long long find_apocalypse_year(int n, vector<int> &periodicities)
{
     int lcm = periodicities[0];

    for (int i = 1; i < n; ++i)
    {
        lcm = lcm * periodicities[i] / __gcd(lcm, periodicities[i]);
    }

    return lcm;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> periodicities(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> periodicities[i];
        }

        long long result = find_apocalypse_year(n, periodicities);
        cout << result << endl;
    }

    return 0;
}
