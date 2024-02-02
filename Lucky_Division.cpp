#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    bool flag = false;
    
    if(n>0){
        int a = n % 10;
        if (a == 4)
        {
            n = n / 10;
            flag = true;
        }
        else if (a == 7)
        {
            n = n / 10;
            flag = true;
        }
    }
    if(flag==false ){
       if(n%4==0 || n%7==0)
           cout << "YES" << endl;
        else{
            cout << "NO" << endl;
        }   
    }
    else if(flag==true){
        cout << "YES" << endl;
    }
}