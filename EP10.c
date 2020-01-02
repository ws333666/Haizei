/*************************************************************************
    > File Name: EP10.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 19时16分15秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#define max_n 2000000

int prime[max_n + 5] = {0};
int init(int ans) {
	ans = 0;
	for (int i = 2; i <= max_n; i++){
		if (!prime[i]) {
		prime[++prime[0]] = i; 
		ans += prime[0];
		}
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > max_n) break;
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	return ans;
}

int main() {
	int ans;
	init(ans);
	printf("%d\n", ans);
	return 0;
}
