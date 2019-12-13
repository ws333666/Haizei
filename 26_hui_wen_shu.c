/*************************************************************************
    > File Name: 26_hui_wen_shu.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月11日 星期三 20时43分53秒
 ************************************************************************/

#include<stdio.h>

int func(int n) {
	int y, m = 0;
	y = n;
	while (y) {
		m = m * 10 + y % 10;
		y = y / 10;
	}
	if (m == n) return 1;
	else return 0;
}

int main() {
	int n, a = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (func(i))  a++;
	}
	printf("%d\n",a);
	return 0;
}
