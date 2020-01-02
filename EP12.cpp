/*************************************************************************
    > File Name: EP12.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月26日 星期四 19时33分23秒
 ************************************************************************/

#include <iostream>
  
using namespace std;
#define max_n 1000

int prime[max_n  + 5] = {0};
int f[max_n + 5] = {0};
int cnt[max_n + 5] = {0};

void init() {
	for (int i = 2; i <= max_n; i++) {
		if (!prime[i]) {
			prime[++prime[0]] = i;
			f[i] = 2;
			cnt[i] = 1;
		}
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > max_n) break;
			prime[prime[j] *i] = 1;
			if (i % prime[j] == 0) {
				int a = i, cnt = 0;
				//while (a % prime[j] == 0) a /= prime[j], cnt++;
				f[i * prime[j]] = f[i] / (cnt[i] + 1) * (cnt + 2);
				cnt[i * prime[j]] = cnt[i] + 1;
				break;
			} else {
				f[prime[j] * i] = f[prime[j]] * f[i];
				cnt[prime[j] * i] = 1;
			}
		}
	}
	return ;
}
int main() {
	  

	return 0;
}
