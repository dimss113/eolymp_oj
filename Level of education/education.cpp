// LINK : https://www.eolymp.com/en/problems/902
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n<=3 && n>=1){
        cout << "Initial" << endl;
    }else if(n<=4 && n>=6){
        cout << "Average" << endl;
    }else if(n>=7 && n<=9){
        cout << "Sufficient" << endl;
    }else if(n>=10 && n<=12){
        cout << "High" << endl;
    }


    return 0;
}
