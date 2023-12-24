#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        v.push_back(s[i]);
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || s[i] =='u' || s[i] == 'y')
    //     {
    //         v.erase(v.begin() + i);
    //     }
    // }

    v.erase(remove_if(v.begin(), v.end(), [](char c)
                      { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'; }),
            v.end());
    vector<char> v2;

    for (int i = 0; i < v.size(); i++)
    {
        v2.push_back('.');
        v2.push_back(v[i]);
    }
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i];
    }
    cout << "\n";
}