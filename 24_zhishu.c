/*************************************************************************
    > File Name: 24_zhishu.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月11日 星期三 10时35分54秒
 ************************************************************************/

#include<stdio.h>

int zhishu(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 2; i <= n; i++) {
		if (zhishu(i) && i >= m)
		printf("%d\n",i);
	}
	return 0;

}
