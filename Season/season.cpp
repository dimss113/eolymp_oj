// LINK : https://www.eolymp.com/en/problems/923
#include <cstdio>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    if(n==12 || n<3){
        puts("Winter");
    }else if(n>=3 && n<6){
        puts("Spring");
    }else if(n>=6 && n<9){
        puts("Summer");
    }else if(n>=9 && n<12){
        puts("Autumn");
    }



    return 0;
}
