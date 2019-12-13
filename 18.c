/*************************************************************************
    > File Name: 18.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月10日 星期二 15时06分06秒
 ************************************************************************/

#include<stdio.h>

int zhishu(int n) {

	for (int i = 2; i * i <= n; i++) {
		if(n % i == 0) return 0;
	}
	return 1;
}

int main() {
	int n;
	scanf("%d",&n);
	for (int  i = 2; i <= n; i++) {	
		if (zhishu(i))
		printf("%d\n",i);
	}
return 0;
}
