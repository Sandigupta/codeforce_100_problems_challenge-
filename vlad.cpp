#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        int countA = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='A')
                countA++;
        }
        int countB = n - countA;

        if(countA>countB){
            cout << 'A' << endl;
        }else{
            cout << "B" << endl;
        }
    }
}