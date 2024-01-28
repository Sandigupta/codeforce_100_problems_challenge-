#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    // string s11 = "";//HOW TO USE TOLOWER TO CONVERT UPPER LETTER STRING INTO SMALLER LETTERS.
    // tolower(s1); //-->THIS ONLY CONVERT CHARECTERS INTO LOWER LETTER.
    // for (int i = 0; i < s1.length(); i++)
    // {
    //     char ch = s1[i];
    //     ch = tolower(ch);
    //     s11 += ch;
    // }
    // cout << s11 << endl;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

    string s2;
    cin >> s2;
    // tolower(s2);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int diff = 0;
    for (int i = 0; i < s1.length(); i++)
    {   
        if(s1[i]!=s2[i]){
        diff = (s1[i] - s2[i]);
        break;
        }
    }
    if (diff == 0)
    {
        cout << 0 << endl;
    }
    else if (diff > 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}