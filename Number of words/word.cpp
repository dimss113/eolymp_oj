// LINK : https://www.eolymp.com/en/problems/909
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
int main(){
    char s[300];
    int jumlah = 1;
    //string a;
    scanf("%[^\n]", s);
    for(int i=0;i<strlen(s);i++){
        if(s[i+1]==' '&&s[i+2]!=' '){
            jumlah++;
        }

    }
    printf("%d", jumlah);
    /*int posisi = 0;

    //printf("%s", a.c_str());
    while(true){
        posisi = a.find(" ", posisi+1);
        jumlah++;
        if(posisi < 0){
            printf("%d\n", jumlah);
            break;
        }
    }*/


    return 0;
}
