// LINK : https://www.eolymp.com/en/problems/901
#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cek = 0;
    for(int i=1;i<s.size();i++){
        if(s[i]=='+' | s[i]=='-' | s[i]=='*'){
            cek++;
        }
    }
    cout << cek << endl;

    return 0;
}
