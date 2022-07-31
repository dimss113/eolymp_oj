// LINK : https://www.eolymp.com/en/problems/924
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    double ring, r;
    scanf("%lf %lf", &ring, &r);
    double luas  =  3.141592*(r*r) - ring;
    luas = sqrt(luas/3.141592);
    printf("%.2lf", luas);




    return 0;
}
