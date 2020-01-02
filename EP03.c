/*************************************************************************
    > File Name: EP03.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 15时24分55秒
 ************************************************************************/

#include <stdio.h>

#define max_n 600851475143LL

int main() {
	long long i = 2, ans = 0, M = max_n;
	while (i * i <= M) {
		if (M % i == 0) ans = i;
		while (M % i ==0) M /= i;
		i++;
	}
	if (M > 1) ans = M;
	printf("%lld\n", ans);
	return 0;
}
