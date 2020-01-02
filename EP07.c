/*************************************************************************
    > File Name: EP07.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 14时49分55秒
 ************************************************************************/

#include <stdio.h>

#define max_n 200000

int prime[max_n + 5] = {0};

void init() {
	for (int i = 2; i <= max_n; i++) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > max_n) break;
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	return ;
}

int main() {
	init();
	printf("%d\n", prime[10001]);
	return 0;
}
