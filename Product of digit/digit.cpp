// LINK : https://www.eolymp.com/en/problems/906
#include <cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    int hasil = (n%10)*(n/100)*((n/10)%10);
    printf("%d", hasil);


    return 0;
}
