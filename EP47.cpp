/*************************************************************************
    > File Name: EP47.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月29日 星期日 18时09分02秒
 ************************************************************************/

#include <iostream>
  
using namespace std;
#define max_n 1000000

int prime[max_n + 5] = {0};

void init() {
	for (int i = 2; i <= max_n; i++) {
		if (prime[i]) continue;
		for (int j = i; j <= max_n; j += i) {
			prime[j] += 1;
		}
	}
	return ;
}


int main() {
	int ans = 0;
	init();  
	for (int i = 1000; i < max_n; i++) {
		int flag = 1;
		for (int j = 0; j < 4 && flag; j++) {
			flag = (prime[i + j] == 4);
		}
		if (!flag) continue;
		ans = i;
		break;
	}
	cout << ans << endl;
	return 0;
}
