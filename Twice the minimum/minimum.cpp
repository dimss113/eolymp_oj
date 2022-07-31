// LINK : https://www.eolymp.com/en/problems/917
#include <cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    double x;
    double cek = 100;
    for(int i=0;i<n;i++){
        scanf("%lf", &x);
        if(x < cek){
            cek = x;
        }
    }
    printf("%.2lf\n", cek*2);


    return 0;
}
