/*************************************************************************
    > File Name: EP04.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 15时35分34秒
 ************************************************************************/

#include <stdio.h>

int is_val(int n) {
	int x = n, m = 0;
	while (x) {
		m = m * 10 + x % 10;
		x /= 10;
	}
	return m == n;
}

int main() {
	int ans = 0;
	for (int i = 100; i < 1000; i++) {
		for (int j = i; j < 1000; j++) {
			if (is_val(i * j) && i * j > ans) ans = i * j;
		}
	}
	printf("%d\n", ans);
	return 0;
}
