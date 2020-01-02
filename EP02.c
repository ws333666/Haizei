/*************************************************************************
    > File Name: EP02.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 15时13分35秒
 ************************************************************************/

#include <stdio.h>

#define max_n 4000000

int main() {
	int a = 0, b = 1, sum = 0;
	while (b < max_n) {
		b = a + b;
		a = b - a;
		if (!(b & 1)) sum += b;
	}
	printf("%d\n", sum);
	return 0;
}
