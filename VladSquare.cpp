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

        vector<string> grid(n);
        for (int i = 0; i < n; i++)
        {
            cin >> grid[i];
        }

        int firstones = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1')
                {
                    firstones++;
                }
            }
            if (firstones > 0)
            {
                break;
            }
        }

        int lastones = 0;
        for (int i = n - 1; i >= 0; i--) // Fix: start from n-1, not n
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == '1')
                {
                    lastones++;
                }
            }
            if (lastones > 0)
            {
                break;
            }
        }

        if (firstones == lastones) // Fix: compare firstones with lastones
        {
            cout << "SQUARE" << endl;
        }
        else
        {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}
