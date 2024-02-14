#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        vector<vector<bool>> ab(k + 1, vector(2, false));

        for (int i = 0; i <k ; i++)
        {
            if(a[i]<=k)
                ab[a[i]][0] = true;
            else if(b[i]<=k)
                ab[a[i]][1] = true;
        }

        int aonly = 0, bonly = 0, both = 0, neither = 0;
        for (int i = 1; i <=k ; i++)
        {
            if(ab[i][0]==true and ab[i][1]==true)
                both++;
            else if(ab[i][0]==true)
                aonly++;
            else if(ab[i][1]==true)
                bonly++;
            else
                neither++;
        }
        
        if(aonly>k/2 or bonly>k/2 or neither>0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}