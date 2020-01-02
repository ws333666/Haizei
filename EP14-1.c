/*************************************************************************
    > File Name: EP14-1.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月21日 星期六 14时11分44秒
 ************************************************************************/

#include <stdio.h>
#define max_n 1000000


typedef long long ll;

ll get_len(ll n) {
	if (n == 1) return 1;
	//if (n < 0) printf("erro\n");
	if (!(n & 1)) return get_len(n >> 1) + 1;
	return get_len(3 * n + 1) + 1;
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
