/*************************************************************************
    > File Name: 25.n_jiecheng.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月11日 星期三 20时33分53秒
 ************************************************************************/

#include<stdio.h>
#include <inttypes.h>

int main() {
	int n;
	int64_t sum;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum = i * sum;
	}
	printf("%ld\n",sum);
	return 0;
}
