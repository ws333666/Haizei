/*************************************************************************
    > File Name: 15.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月09日 星期一 10时52分41秒
 ************************************************************************/

#include<stdio.h>

int Triangle(int n) {
	return n * (n + 1) / 2;
}

int Pentagonal(int n) {
	return n *(3 * n - 1) / 2;
}


int Hexagonal(int x) {
	return n * (2 * n - 1);
}
int binary_search(int (*func)(int), int x) {
	int head = 1; tail = x, mid;
	while (head <= tail) {
		mid = (head + tail) >> 1;
		if (func(mid) == x) return mid;
		if (func(mid) <x) head = mid + 1;
		else tail = mid -1;
	}
	return -1;
}


int main () {
    int n = 286;
	for (;; n++) {
		if (binary_search(Triangle, Hexagonal()) == )
	}
    
	return 0;
}
