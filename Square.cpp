#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        vector<int> X;
        vector<int> Y;

        for (int i = 0; i < 4; i++)
        {
            int x, y;
            cin >> x >> y;

            X.push_back(x);

            Y.push_back(y);
        }

        int indx = -1, indy = -1;
        for (int i = 0; i < 1; i++)
        {
            for (int j = 1; j < 4; j++)
            {
                if (X[i] == X[j])
                {
                    indx = j;
                    break;
                }
            }
        }
        int sdLen = abs(Y[indx] - Y[0]);
        cout << sdLen * sdLen << endl;
    }
}