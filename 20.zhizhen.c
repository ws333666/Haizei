/*************************************************************************
    > File Name: 20.zhizhen.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月10日 星期二 16时50分56秒
 ************************************************************************/

#include<stdio.h>

int main() {
  
	int arr[100];
	printf("arr = %p\n", arr);
	printf("arr + 1 = %p\n",arr + 1);
	char *p = (char *)arr;
	printf("p + 1 = %p\n",p + 1);
	return 0;
}
