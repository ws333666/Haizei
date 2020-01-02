/*************************************************************************
    > File Name: EP08.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月19日 星期四 15时59分19秒
 ************************************************************************/

#include <iostream>

#include "EP08.h"  
using namespace std;

int main() {
	long long p = 1, zero = 0, ans = 0;
	for (int i = 0; num[i]; i++) {
		if (num[i] == '0') {
			zero += 1;
		} else {
			p *= (num[i] - '0');
		}
		if (i >= 13) {
			if (num[i - 13] == '0') {
				zero -= 1;
			} else {
				p /= (num[i - 13] - '0');
			}
		}
		if (zero == 0 && p > ans) ans = p;
	}
	printf("%lld\n", ans);
	return 0;
}
