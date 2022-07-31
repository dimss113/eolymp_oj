// link: https://www.eolymp.com/en/problems/1228

#include <cstdio>
#include <queue>
using namespace std;


int main(){
    priority_queue<long long>number;
    long long n, x;
    scanf("%lld", &n);
    for(int i=0;i<n;i++){
        scanf("%lld", &x);
        number.push(-x);
    }
    long long sum = 0;
    long long a, b;
    while(!number.empty()){
        a = number.top();
        number.pop();
        if(number.empty()){
            break;
        }
        b = number.top();
        number.pop();
        sum = sum - (a+b);
        number.emplace(a+b);
    }

    printf("%lld\n", sum);
    return 0;
}