#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int nps = 0;
    while(t--){
        int arr[3];
        for (int i = 0; i < 3;i++){
            cin >> arr[i];
        }

        int count = 0;
        for (auto it:arr){
            if(it==1){
                count++;
            }
        }
        if(count>=2){
            nps++;
        }
    }
    cout << nps << endl;
}