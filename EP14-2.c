/*************************************************************************
    > File Name: EP14-1.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月21日 星期六 14时11分44秒
 ************************************************************************/

#include <stdio.h>
#define max_n 1000000
#define size 1000000
int keep[size + 5] = {0};

typedef long long ll;

ll get_len(ll n) {
	if (n == 1) return 1;
	if (n <= size && keep[n]) return keep[n];
	ll ret = 0;
	if (!(n & 1)) ret = get_len(n >> 1) + 1;
	else ret = get_len(3 * n + 1) + 1;
	if (n <= size) keep[n] = ret;
	return ret;
}


int main() {
	ll ans = 0, len = 0;
	for (int i = 1; i < max_n; i++) {
		ll temp = get_len(i);
		if (temp > len) {
			ans = i;
			len = temp;
		}
	}
	printf("num = %lld, len = %lld\n", ans, len);
	return 0;
}
