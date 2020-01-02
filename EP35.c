/*************************************************************************
    > File Name: EP35.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月22日 星期日 18时58分18秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define max_n 1000000

int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {1, 1, 0};


void init() {
	for (int i = 2; i < max_n; i++) {
		if (!is_prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > max_n) break;
			is_prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	return ;
}

int is_val(int n) {
	int digit = floor(log10(n)) + 1;
	int h = pow(10, digit - 1);
	int temp = n;
	for (int i = 1; i < digit; i++) {
		temp = (temp % 10) * h + temp / 10;
		if (is_prime[temp]) return 0;
	}
	return 1;
}

int main() {
	int cnt = 0;
	init();
	for (int i = 1; i <= prime[0]; i++) {
		if (!is_val(prime[i])) continue;
		cnt +=1;
	}
	printf("%d\n", cnt);
	return 0;
}
