/*************************************************************************
    > File Name: EP21-1.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月29日 星期日 18时30分56秒
 ************************************************************************/

#include <iostream>
  
using namespace std;
#define max_n 10000

int f[max_n + 5] = {0};

void init() {
	for (int i = 1; i <= max_n; i++) {
		for (int j = 2; i * j <= max_n; j++) {
			f[i * j] += i;
		}
	}
	return ;
}


int main() {
	init();
	long long sum = 0;
	for (int i = 2; i < max_n; i++) {
		if (f[i] != i && f[i] < max_n && i == f[f[i]]) sum += i;
	}
	cout << sum << endl;
	return 0;
}
