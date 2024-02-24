// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int max = 0;
//         int min = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             if (i % 2 != 0)
//                 max++;
//             else
//                 min++;
//         }
//         cout << max << " " << min << endl;
//     }
// }

#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        // Maximum occupancy: Place people in every other urinal, rounded down for odd N
        int maxOccupancy = N / 2;

        // Minimum occupancy: Handle odd/even cases efficiently
        int minOccupancy = (N % 2 == 0) ? (N - 2) / 2 : (N - 1) / 2;

        cout << maxOccupancy << " " << minOccupancy << endl;
    }

    return 0;
}
