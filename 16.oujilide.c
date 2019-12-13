/*************************************************************************
    > File Name: 16.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月10日 星期二 10时40分27秒
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
	return(b ? gcd(b, a %b) : a);
}
int main() {
  int a, b;
  while (~scanf("%d%d", &a, &b)) {
	  printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));}

	return 0;
}
