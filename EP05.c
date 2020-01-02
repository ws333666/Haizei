/*************************************************************************
    > File Name: EP05.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 15时44分05秒
 ************************************************************************/

#include <stdio.h>

int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

int main() {
	int ans = 1;
	for (int i = 1; i <= 20; i++) {
		if (ans % i == 0) continue;
		ans *= i / gcd(ans, i);
	}
	printf("%d\n", ans);
	return 0;
}
