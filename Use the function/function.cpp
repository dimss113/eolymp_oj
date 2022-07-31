// LINK : https://www.eolymp.com/en/problems/920
#include <cstdio>
#define max(a,b) ((a>b) ? a : b)
#define min(a,b) ((a>b) ? b : a)
using namespace std;
int main(){
    double x,y,z;
    scanf("%lf %lf %lf", &x, &y, &z);
    double hasil = min(max(x,y),max(y,z));
    hasil = min(hasil, x+y+z);
    printf("%.2lf", hasil);




    return 0;
}
