// LINK : https://www.eolymp.com/en/problems/500
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int l,w,h;
    cin >> n;
    double luas;
    for(int i=0;i<n;i++){
        cin >> l >> w >> h;
        luas = 2*h*(l+w);
        cout << ceil(luas/16) << endl;
    }


    cin.get();
    return 0;
}
