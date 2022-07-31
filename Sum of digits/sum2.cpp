#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

char s[5010];

int main(){
    int t;
    scanf("%d", &t);
    int sum;
    while(t--){
        scanf("%s", s);
        sum = 0;
        for(int i=0;i<strlen(s);i++){
            sum += s[i] - '0';
        }
        printf("%d\n", sum);
    }


    return 0;
}

