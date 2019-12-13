/*************************************************************************
    > File Name: 21.niudun.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月10日 星期二 20时21分10秒
 ************************************************************************/

#include<stdio.h>
#include <math.h>
#define EPSL 1e-6

double F(double x) {
	return x * x - 2;
}

double f(double x) {
	return 2 * x;
}

double NewTon(double (*F)(double), double (*f)(double)) {
	double x = 1.0;
	while (fabs(F(x)) > EPSL) {
		x -= F(x) / f(x);
	}
	return x;
}
int main() {
	double x = NewTon(F, f);
	printf("%lf * %lf - 2 = %lf\n", x, x, x * x - 2);
	printf("%lf\n", x);

	return 0;
}
