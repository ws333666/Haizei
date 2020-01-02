/*************************************************************************
    > File Name: EP29.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月29日 星期日 14时15分16秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
#define max_n 10000
#define max_m 210

int *result[max_n + 5];
int result_len = 0;

int find_result(int *num) {
	for (int i = 0;i < result_len; i++) {
		if (memcmp(result[i], num, sizeof(int) * max_m) == 0) {
			return i + 1;
		}
	}
	return 0;
}

int *calc(int a, int b) {
	int *temp = (int *)calloc(sizeof(int), max_m);
	temp[0] = 1, temp[1]= 1;
	for (int i = 0; i < b; i++) {
		for (int j = 1; j <= temp[0]; j++) temp[j] *= a;
		for (int j = 1; j <= temp[0]; j++) {
			if (temp[j] < 10) continue;
			temp[j + 1] += temp[j] / 10;
			temp[j] %= 10;
			temp[0] += (temp[0] == j);
			}
	}
	return temp;
}

int main() {
	for (int a = 2; a <= 100; a++) {
		for (int b = 2; b <= 100; b++) {
			int *temp = calc(a, b);
		if (find_result(temp) == 0) {
			result[result_len++] = temp;
			}
		}
	}
	cout << result_len << endl;
	return 0;
}
