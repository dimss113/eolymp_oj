// LINK : https://www.eolymp.com/en/problems/913
#include <cstdio>
using namespace std;

double sum(double a, double b){
    return a+b;
}
double multi(double a, double b){
    return a*b;
}

int main(){
    int n;
    scanf("%d", &n);
    double a,b;
    for(int i=0;i<n;i++){
        scanf("%lf %lf", &a, &b);
        printf("%.4lf %.4lf\n", sum(a, b), multi(a, b));
    }



    return 0;
}
