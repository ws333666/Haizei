/*************************************************************************
    > File Name: EP42.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月29日 星期日 15时33分17秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include "EP42.txt"  
using namespace std;
int triangle(int n) {
	return n * (n + 1) / 2;
}

bool binary_search(int (*func)(int), int l, int r, int x) {
	if (l > r) return false;
	int mid = (l + r) >> 1;
	if (func(mid) == x) return true;
	if (func(mid) < x) l = mid + 1;
	else r = mid - 1;
	return binary_search(func, l, r, x);
}


int is_val(char *str) {
	int sum = 0;
	for (int i = 0; str[i]; i++) {
		sum += (str[i] - 'A' + 1);
	}
	return binary_search(triangle, 1, sum, sum);
}


int main() {
	int n = sizeof(str) / 100, cnt = 0;
	for (int i = 0; i < n; i++) {
		if (is_val(str[i])) cnt += 1;
	}
	cout << cnt << endl;
	return 0;
}
