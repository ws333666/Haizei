/*************************************************************************
    > File Name: 23.niudundiedai.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月11日 星期三 09时58分18秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define EPSILON 1e-6

double f(double x) {
	return 2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6;
}

double frm(double x) {
	return 6 * pow(x, 2) - 8 * x + 3;
}

double NewTon(double *f(double), double *frm(double)) {
	double x = 1.5;
	while (fabs(f(x)) > EPSILON) {
		x -= f(x) / frm(x);
	}
	return x;
}

int main() {
	double x = NewTon(f, frm);
	printf("%lf\n", x);

	return 0;
}
