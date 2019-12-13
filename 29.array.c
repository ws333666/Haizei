/*************************************************************************
    > File Name: 29.array.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月12日 星期四 13时21分00秒
 ************************************************************************/

#include<stdio.h>

int main() {
	int arr[100];
	printf("&arr[0] = %p  arr = %p", &arr[0], arr);
	printf("arr + 1 = %p  arr + 2 = %p", arr + 1, arr + 2);
	char *p = (char *)arr;
	printf("p + 1 = %p  p + 2 = %p", p + 1, p + 2);
	return 0;
}
