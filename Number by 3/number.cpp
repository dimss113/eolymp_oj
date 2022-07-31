// LINK : https://www.eolymp.com/en/problems/919
#include <cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    double x;
    double sum = 0;
    int cek = 0;
    for(int i=1;i<=n;i++){
        scanf("%lf", &x);
        if(i%3==0 && x>0){
            sum +=x;
            cek++;
        }
    }
    printf("%d %.2lf", cek, sum);


    return 0;
}
