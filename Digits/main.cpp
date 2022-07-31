// link : https://www.eolymp.com/en/problems/2

#include <cstdio>
using namespace std;
int main(){
	int n;
	scanf("%d", &n);
	int a=0;
	if(n>0){
		for(int i = 1; i <= n; i=i*10){
		a++;
		}
		printf("%d", a);
	}else{
		puts("1");
	}
	return 0;
}