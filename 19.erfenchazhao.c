/*************************************************************************
    > File Name: 19.erfenchazhao.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月10日 星期二 15时55分49秒
 ************************************************************************/

#include<stdio.h>


int f(int x) {
	return x * x;
}
int binary_search(int (*arr)(int), int x, int n) {
	int head = 0, tail = n - 1, mid;
	while (head + 3 <= tail) {
		mid = (head + tail) >> 1;
		if(arr(mid) == x) return mid;
		if(arr(mid) < x) head = mid + 1;
		else tail = mid - 1;
	}
	for (int i = head; i <= tail; i++) {
		if (arr(i) == x) return i;
	}
	return -1;
}

int binary_search1(int *arr, int n) {
	int head = 0, tail = n; mid;
	while (head < tail) {
		mid = (head +tail) >> 1;
		if(arr[mid] == 1) tail = mid;
		else head =mid + 1;
	}
	return head == n ? -1 : head;
}

int binary_search2(int *arr, int n) {
	int head = -1,tail = n - 1, mid;
	while (tail > head) {
		mid = (head + tail) >> 1;
		if(arr[mid] == 0) head = mid;
		else tail = mid - 1;
	}
	return tail == n ? -1 : tail;
}


int main() {
	int y;
	while (~scanf("%d", &y)) {
		int x = binary_search(f, y, 100);
		printf("%d * %d = %d\n", x, x, y);
	}
/*int main() {
	int arr[100], n;
	scanf("%d", %n);
	for (int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
	int x;
	scanf("%d", &x);
	printf("%d\n", binary_search(arr, x, n));
}*/
	return 0;
}
