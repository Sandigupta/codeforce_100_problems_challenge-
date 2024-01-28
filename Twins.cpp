// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         sum += v[i];
//     }

//     sort(v.begin(), v.end(), greater<int>());
//     int cnt = 0;
//     int sum2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum2 += v[i];
//         sum = sum - v[i];
//         if (sum2 <= sum)
//         {
//             cnt++;
//             continue;
//         }
//         else if (sum2 > sum)
//         {
//             cnt++;
//             break;
//         }
//     }
//     cout << cnt << endl;
// }

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

            vector<int> v(n);
            for (int i = 0; i < n; i++)
            {
                cin >> v[i];
            }
            sort(v.begin(), v.end());
            int cnt = 0;
            for (int i = 1; i < n; i++)
            {
                if (v[i] > v[0])
                {
                    if (v[i] % v[0] == 0 && v[i] / v[0] == v[0])
                    {
                        v[i] = v[0];
                        cnt++;
                    }
                    else
                    {
                        for (int j = 2; j < v[0]; j++)
                        {
                            if (v[i] % j == 0 && v[i] / j == v[0])
                            {
                                v[i] = v[0];
                                cnt++;
                            }
                        }
                    }
                }
            }

            if (cnt == 0)
            {
                cout << n << endl;
            }
            else
            {
                cout << cnt << endl;
            }
        }
}