/*************************************************************************
    > File Name: EP30.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月18日 星期三 15时57分31秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define max_n 354294

int is_val(int n) {
	int x = n, m = 0;
	while (x) {
		m += pow(x % 10, 5);
		x /= 10;
	}
	return m == n;
}

int main() {
	int sum = 0;
	for (int i = 2; i <= max_n; i++) {
		if (is_val(i)) sum += i;
	 }
	printf("%d\n", sum);
	return 0;
}
