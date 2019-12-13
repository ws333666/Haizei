/*************************************************************************
    > File Name: 27_tong_yu_fangcheng.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月11日 星期三 21时22分33秒
 ************************************************************************/

#include<stdio.h>

int ex_gcd(int a, int b,int	*x,int *y) {
	if (b == 0) {
		*x = 1, *y = 0;
		return a;
	}
	int ect = ex_gcd(b, a % b, y , x);
	*y -= (a / b) * (*x);
	return ect;
}


int main() {
	int a, b, x, y;
	scanf("%d %d", &a, &b);
	ex_gcd(a, b, &x, &y);
	int temp = b;
	printf("%d\n",((x % temp) + temp) % temp);

	return 0;
}
