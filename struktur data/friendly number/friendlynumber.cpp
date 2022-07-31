#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    scanf("%d %d", &m, &n);
    for(int i=n;i>=m;i--){
        int temp = 1;
        int sum = 0;
        int sum2 = 0;
        while(temp < i){
            if(i%temp == 0){
                sum = sum + temp;
            }
            temp++;
        }
        temp = 1;
        while(temp<sum){
            if(sum%temp == 0){
                sum2 = sum2 + temp;
            }
            temp++;
        }
        if(i == sum2 ){
            printf("%d %d", sum, i);
            break;
        }
    }



    return 0;
}
