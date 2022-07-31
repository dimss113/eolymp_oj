// link : https://www.eolymp.com/en/problems/574

#include <cstdio>
int nums[1000002];

int main(){
	int n, k, val, hi=-1;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++){
		scanf("%d", &val);
		if(val >= 0){
			nums[val]++;
			if(val > hi)hi= val;
		}
	}
	for(int i = hi; i >= 0; i--){
		if(0 <=nums[i] && nums[i] <=k){
			while(nums[i]--){
				printf("%d ", i);
			}
		}
	}
	puts("");
	return 0;
}