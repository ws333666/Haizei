/*************************************************************************
    > File Name: 28.素数筛.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月12日 星期四 11时04分20秒
 ************************************************************************/

#include<stdio.h>
#define max_n 1000

int prime[max_n + 5] = {0};

void init_prime() {
	//prime[0] = 1, prime[1] = 1;
	for (int i = 2; i <= max_n; i++) {
		//if (primr[i]) continue;
		for (int j = i * i; j <= max_n; j += i) {
			prime[j] = 1;
		}
	}
}

int main() {
	init_prime();
	int n;
	while (~scanf("%d", &n)) {
		printf("%s\n", prime[n] ? "No" : "Yes");
	}
	
	return 0;
}
