/*************************************************************************
    > File Name: EP44.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月24日 星期二 18时46分46秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

typedef long long int1;
int1 Pentagonal(int1 n) {
	return n * (3 * n - 1) / 2;
}

int1 binary_search(int1 (*func)(int1), int1 n, int1 x) {
	int1 head = 1, tail = n, mid;
	while (head <= tail) {
		mid = (head + tail) >> 1;
		if (func(mid) == x) return mid;
		if (func(mid) < x) head = mid + 1;
		else tail = mid - 1;
	}
	return 0;
}

int main() {
	int1 n = 2, D = INT32_MAX, Pk, Pj;
	while (Pentagonal(n) - Pentagonal(n - 1) < D) {
		Pk = Pentagonal(n);
		for (int1 j = n - 1; j >= 1; j--) {
			Pj = Pentagonal(j);
			if (Pk - Pj >= D) break;
			int flag = 1;
			flag = binary_search(Pentagonal, 2 * n, Pk + Pj);
			flag = flag && binary_search(Pentagonal, n, Pk - Pj);
			if (flag) {
				D = Pk - Pj;
			}
		}
		n += 1;
	}
	printf("%lld\n", D);
	return 0;
}
