/*************************************************************************
    > File Name: EP24-1.cpp
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月28日 星期六 20时14分17秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
  
int main() {
	int num[10];
	for (int i = 0; i < 10; i++) num[i] = i;
	int k = 1000000 - 1;
	do {
		next_permutation(num, num + 10);
		k -= 1;
	} while (k);

	for (int i = 0; i < 10; i++) {
		cout << num[i];
	}
	cout << endl;
	return 0;
}
