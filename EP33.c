/*************************************************************************
    > File Name: 1.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月22日 星期日 18时06分31秒
 ************************************************************************/

#include <stdio.h>

int is_val(int x, int y) {
	int x1 = x / 10, x2 = x % 10;
	int y1 = y / 10, y2 = y % 10;
	if (!x2 || !y2) return 0;
	if (x1 == y1 && x2 * y == x * y2) return 1;
	if (x1 == y2 && x2 * y == x * y1) return 1;
	if (x2 == y1 && x1 * y == x * y2) return 1;
	if (x2 == y2 && x1 * y == x * y1) return 1;
	return 0;
}


int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

int main() {
	int x = 1, y = 1, c = 1;
	for (int a = 10; a < 100; a++) {
		for (int b = a + 1; b < 100; b++) {
			if (!is_val(a, b)) continue;
			x *= a, y *= b;
			c = gcd(x , y);
			x /= c, y /= c;
		}
	}
	printf("%d\n", y);
	return 0;
}
