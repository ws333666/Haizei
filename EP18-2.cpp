/*************************************************************************
    > File Name: EP18-2.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月28日 星期六 16时52分03秒
 ************************************************************************/

#include <iostream>
  
using namespace std;
#define max_n 20

int val[max_n][max_n] = {0};
int main() {
	for (int i = 0; i < max_n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> val[i][j];
		}
	}
	for (int i = max_n - 2; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			val[i][j] += max(val[i + 1][j], val[i + 1][j + 1]);
		}
	}
	cout << val[0][0] << endl;
	return 0;
}
