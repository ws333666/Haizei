/*************************************************************************
    > File Name: 22.shuzu.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月10日 星期二 20时32分31秒
 ************************************************************************/

#include<stdio.h>

int func(int *a, int n) {   //xingcan
/*	*n  = 123;*/
//	printf("func : a[3] = %d\n", a[3]);
	printf("*a = %lu\n", sizeof(a));
	printf("*a = %p, *a + 1 = %p\n", a, a + 1);
	return 0;
}


int main() {
	int arr[100];
	printf("arr = %p, arr[0] = %p\n", arr,&arr[0]);
	printf("arr + 1 = %p, arr + 2 = %p\n", arr + 1, arr + 2);
	char *p = (char *)arr;
	printf("p + 1 = %p, p + 2 = %p\n",p + 1, p + 2);
	int n = 0;
	//scanf("%d", &n);
	/*scanf("%d", &n);
	func(&n);        //shijicanshu
	printf("%d\n", n);

	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}*/

	func(arr, n);
	printf("arr = %lu\n",sizeof(arr));
	return 0;
}
