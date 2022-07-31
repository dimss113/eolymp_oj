// LINK : https://www.eolymp.com/en/problems/915
#include <cstdio>
#include <array>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        scanf("%d", &arr[i]);
    }
    sort(arr,  arr+3);
    double hasil = (sqrt(arr[0]*arr[0]+arr[1]*arr[1]));
    if(hasil == arr[2]){
        puts("YES");
    }else {
        puts("NO");
    }





    return 0;
}
