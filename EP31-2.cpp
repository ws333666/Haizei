/*************************************************************************
    > File Name: EP31-2.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2020年01月01日 星期三 16时39分39秒
 ************************************************************************/

#include <iostream>
  
using namespace std;
#define max_n 8
#define max_m 200

int w[max_n + 5] = {
	1, 2, 5, 10, 20, 50, 100, 200
};
int f[max_m + 5] = {0};


int main() {
	f[0] = 1;
	for (int i = 0; i < max_n; i++) {
		for (int j = w[i]; j <= max_m; ++j) {
			f[j] += f[j - w[i]];
		}
	}
	cout << f[max_m] << endl;
	return 0;
}
