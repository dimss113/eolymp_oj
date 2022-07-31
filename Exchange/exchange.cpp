// LINK : https://www.eolymp.com/en/problems/407
#include <iostream>
using namespace std;


int main(){
    int n,k;
    cin >> n;
    string s;
    string baru = "000";
    for(int i=0;i<n;i++){
        s = "GCV";
        cin >> k;
        for(int j=0;j<k;j++){
             baru[0] = s[2];
             baru[1] = s[0];
             baru[2] = s[1];
             s = baru;
        }
        cout << baru << endl;
    }


    cin.get();
    return 0;
}
