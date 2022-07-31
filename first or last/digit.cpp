// LINK : https://www.eolymp.com/en/problems/903
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n/100 > n%10){
        cout << n/100 << endl;
    }else if(n/100 < n%10){
        cout << n%10 << endl;
    }else {
        cout << "=" << endl;
    }
    return 0;
}
