// LINK : https://www.eolymp.com/en/problems/910
#include <cstdio>
using namespace std;
int main(){
    int n;
    int cek = 0;
    scanf("%d", &n);
    double x;
    double sum = 0;
    double bar = 0;
    for(int i=0;i<n;i++){
        scanf("%lf", &x);
        if(x > 0){
            cek = 1;
            sum = sum + x;
            bar++;
        }
    }
    if(cek == 1){
        sum = sum/bar;
        printf("%.2lf", sum);
    }else{
        printf("Not Found");
    }


    return 0;
}
