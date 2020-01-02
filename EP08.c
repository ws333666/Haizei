/*************************************************************************
    > File Name: EP08.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月20日 星期五 09时11分44秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define max_n 1000

char num[max_n + 5];


int main() {
	int len = 0;
	while (~scanf("%s", num + len)) len += strlen(num + len);
	long long p = 1, ans = 0, zero = 0;
	for (int i = 0; num[i]; i++) {
		num[i] -= '0';
		if (num[i]) p *= num[i];
		else zero++;
		if (i < 13) continue;
		if (num[i - 13]) p /= num[i - 13];
		else zero--;
		if (zero == 0 && ans < p) ans = p;
	}
	printf("%lld\n", ans);
	return 0;
}
