// LINK : https://www.eolymp.com/en/problems/907
#include <cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    double arr[n+1];
    int cek = 0;
    for(int i=1;i<=n;i++){
        scanf("%lf", &arr[i]);
        if(arr[i]<=2.5){
            cek = 1;
        }
    }
    if(cek == 1){
        for(int i=1;i<=n;i++){
            if(arr[i]<=2.5){
                printf("%d %.2lf\n", i, arr[i]);
                break;
            }
        }
    }else {
        printf("Not Found\n");
    }


    return 0;
}
