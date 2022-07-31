// LINK : https://www.eolymp.com/en/problems/914
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n;
    double x;
    double cek = 0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%lf", &x);
        x = abs(x);
        if(x > cek){
            cek = x;
        }
    }
    printf("%.2lf\n", cek);





    return 0;
}
