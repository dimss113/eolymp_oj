#include <stdio.h>
#include <algorithm>
using namespace std;
#define oo 1000000000000ll
#define cek(a,b) ((a>=0) ? (a+b) : b)

int main(){
    int n, A;
    long int ans = -oo, sum = 0ll;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &A);
        sum = cek(sum, A);
        ans = max(sum, ans);
    }
    printf("%lld\n", ans);

    return 0;
}
