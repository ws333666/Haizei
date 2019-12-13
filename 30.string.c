/*************************************************************************
    > File Name: 30.string.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月12日 星期四 20时32分57秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>

void test_sscanf() {
	char str1[] = "123 456 789 987";
	int a, b, c, d;
	sscanf(str1, "%d%d%d%d", &a, &b, &c, &d);
	printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);
}



int main() {
	int n;
/*	char str[100];
	while (~scanf("%d", &n)) {
		sprintf(str, "%x", n);
		printf("%s has %lu digit",str, strlen(str));
	}*/
	test_sscanf();
	return 0;
}
