// LINK : https://www.eolymp.com/en/problems/922
#include <cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int x[n+1];
    int a[n+1];
    int tmp;
    for(int i=1;i<=n;i++){
        scanf("%d", &x[i]);
        if(i < n){
            a[i+1] = x[i];
        }else if(i == n) {
            a[1] = x[i];
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}
