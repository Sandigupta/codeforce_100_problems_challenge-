#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    vector<int> v;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            v.push_back(int(s[i]));
        }
    }
    sort(v.begin(), v.end());
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        
        if(s[i]!='+'){
            s[i] = char(v[i-j]);
            j++;
        }
    }
    cout << s<< endl;
}


