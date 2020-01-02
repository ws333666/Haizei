/*************************************************************************
    > File Name: EP36.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 16时17分21秒
 ************************************************************************/

#include <stdio.h>

#define max_n 1000000

int is_val(int n, int base) {
	int x = n, m = 0;
	while (x) {
		m = m * base + x % base;
		x /= base;
	}
	return m == n;
}

int main() {
	int sum = 0;
	for (int i = 1; i <= max_n; i++) {
		if (is_val(i, 10) && is_val(i, 2)) sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
