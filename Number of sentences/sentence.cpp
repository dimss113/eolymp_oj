// LINK : https://www.eolymp.com/en/problems/912
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
int main(){
    char s[300];
    scanf("%[^\n]", s);
    int jumlah = 0;
    for(int i=0;i<strlen(s);i++){
        if(s[i+1]=='!' && s[i+2]!='!'){
            jumlah++;
        }
    }
    printf("%d", jumlah);


    return 0;
}
