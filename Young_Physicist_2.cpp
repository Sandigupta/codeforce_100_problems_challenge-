// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];


//             for (int i = 0; i < n; i++)
//             {
//                 for (int j = 0; j < n;j++){
//                     int ele;
//                 cin >> ele;
//                 arr[j] +=ele ;
//                 }
               
//             }
//       int sum1 = accumulate(arr, arr + n,0);
//        if(sum1==0){
//            cout << "YES" << endl;
//        }
//        else{
//            cout << "NO" << endl;
    //    }
//  }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x_sum = 0, y_sum = 0, z_sum = 0;

    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        x_sum += x;
        y_sum += y;
        z_sum += z;
    }

    if (x_sum == 0 && y_sum == 0 && z_sum == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
