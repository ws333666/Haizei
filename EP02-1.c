/*************************************************************************
    > File Name: EP02-1.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 15时17分44秒
 ************************************************************************/

#include <stdio.h>

#define max_n 44

#define N 4000000

int prime[max_n + 5] = {0};

int main() {
	prime[1] = 0, prime[2] = 1;
	long long sum = 0;
	for (int i = 3; i <= max_n && prime[i - 1] + prime[i - 2] <= N; i++) {
		prime[i] =prime[i - 1] + prime[i - 2];
		if (prime[i] & 1) continue;
		sum += prime[i];
	}
	printf("%lld\n", sum);
	return 0;
}
