// LINK : https://www.eolymp.com/en/problems/916
#include <cstdio>
using namespace std;
int main(){
    int a, b, c, d;
    int p, pmin, pmax, imin, imax, j, jmin, jmax, rez, flag;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a < b){
        imin = a; imax = b;
    }
    else{
        imin = b; imax = a;
    }
    if (c < d){
        jmin = c; jmax = d;
    }
    else{
        jmin = d; jmax = c;
    }
    pmin = imin * jmin;
    pmax = imax * jmax;
    rez = 0;
    for (p = pmin; p <= pmax; p++){
        flag = 0;
        for (int i = imin; i <= imax; i++){
            j = p / i;
            if (p % i == 0 && j >= jmin && j <= jmax) flag = 1;
        }
        if (flag == 1) rez = rez + 1;
    }
        printf("%d", rez);

    return 0;
}
