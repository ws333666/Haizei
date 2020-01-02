/*************************************************************************
    > File Name: EP34.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 16时07分41秒
 ************************************************************************/

#include <stdio.h>

#define max_n 2903040

int prime[10] = {0};

int func(int n) {
	if (prime[n]) return prime[n];
	if (n == 0) return 1;
	if (n == 1) return 1;
	return prime[n] = n * func(n - 1);
}

int is_val(int n) {
	int x = n, m = 0;
	while (x) {
		m += func(x % 10);
		x /= 10;
	}
	return m == n;
}

int main() {
	int sum = 0;
	for (int i = 3; i <= max_n; i++) {
		if (is_val(i)) sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
