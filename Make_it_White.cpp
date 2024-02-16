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

        string s;
        cin >> s;

        int ptr1 = -1;
        int ptr2 = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                ptr1 = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                ptr2 = i;
                break;
            }
        }
        cout << (ptr2 - ptr1) + 1 << endl;
    }
}