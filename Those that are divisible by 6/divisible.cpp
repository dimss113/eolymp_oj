// LINK : https://www.eolymp.com/en/problems/908
#include <cstdio>
using namespace std;
int main(){
    int n,x;
    scanf("%d", &n);
    int sum = 0;
    int cek = 0;
    for(int i=0;i<n;i++){
        scanf("%d", &x);
        if(x%6 == 0 && x>0){
            sum += x;
            cek++;
        }
    }
    printf("%d %d", cek, sum);
    return 0;
}
