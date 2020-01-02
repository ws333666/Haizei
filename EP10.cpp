/*************************************************************************
    > File Name: EP10.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月19日 星期四 18时48分20秒
 ************************************************************************/

#include <iostream>
#include <cinttypes>
#define max_n 2000000

int64_t prime[max_n + 5] = {0};

using namespace std;

int main() {
	int64_t ans = 0;
	for (int i = 2; i <= max_n; i++) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > max_n) break;
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
	for (int64_t i = 1; i <= prime[0]; i++) {
		//cout << prime[i] << " ";
		ans += prime[i];
	}
	printf("%" PRId64 "\n", ans);

	return 0;
}
