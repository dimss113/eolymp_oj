// LINK : https://www.eolymp.com/en/problems/911
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
    int a, b, c, d;
    int x1, x2;
    scanf("%d %d %d", &a,&b, &c);
    d = (b*b) - (4*a*c);
    if(d>0){
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        if(x1>x2){
            printf("Two roots: %d %d", x2, x1);
        }else {
             printf("Two roots: %d %d", x1, x2);
        }
    }else if(d == 0){
        x1 = (-b + sqrt(d)) / (2*a);
        printf("One root: %d", x1);
    }else {
        printf("No roots");
    }



    return 0;
}
