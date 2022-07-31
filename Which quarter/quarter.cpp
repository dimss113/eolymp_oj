// LINK : https://www.eolymp.com/en/problems/918
#include <cstdio>
using namespace std;
int main(){
    double x, y;
    scanf("%lf %lf", &x, &y);
    if(x>0 && y>0) puts("1");
    else if(x<0 && y>0) puts("2");
    else if(x<0 && y<0) puts("3");
    else if(x>0 && y<0) puts("4");
    else puts("0");


    return 0;
}
