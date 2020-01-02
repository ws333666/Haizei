/*************************************************************************
    > File Name: EP20.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 20时03分15秒
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>
#define max_n 999999999LL

int64_t prime[max_n + 5] = {0};

int64_t func(int n) {
	if (prime[n]) return prime[n];
	if (n == 1) return 1;
	return prime[n] = n * func(n - 1);
}


/*int keep[10] = {1, 1};
void number() {
	for (int i = 2; i <= 9; i++) {
		keep[i] = i * number(i - 1);
	}
	return ;
}


int64_t is_val(int n) {
	int64_t x = number(), m = 0;
	while (x) {
		m += x % 10;
		x /= 10;
	}
	return m;
}
*/
int main() {
	int n = 20;
	printf("%" PRId64 "\n", func(n));
	//printf("%" PRId64 "\n", func(n));
	//printf("%" PRId64 "\n", is_val(n));
	return 0;
}
