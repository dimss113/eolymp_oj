// LINK : https://www.eolymp.com/en/problems/921
#include <cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    double x;
    int cek = 0;
    double sum = 0;
    for(int i=0;i<n;i++){
        scanf("%lf", &x);
        if(x<0){
            sum += x;
            cek++;
        }
    }
    printf("%d %.2lf", cek, sum);


    return 0;
}
