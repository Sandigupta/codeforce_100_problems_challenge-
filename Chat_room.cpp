#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int index = 0;
    char hello[] = {'h', 'e', 'l', 'l', 'o'};

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == hello[index]) {
            index++;
        }
        
        if (index == 5) {
            cout << "YES" << endl;
            return 0;
        }
    }
    // cout << index << endl;
    cout << "NO" << endl;

    return 0;
}
