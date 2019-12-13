/*************************************************************************
    > File Name: 17.my_printf.c
    > Author: wangshuai
    > Mail: ws1519704327@126.com 
    > Created Time: 2019年12月10日 星期二 14时20分25秒
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#define PUTC(a) putchar(a), ++cnt
int my_printf(const char *frm, ...) {
	int cnt = 0;
	va_list arg;
	va_start(arg, frm);
	for (int i = 0; frm[i]; i++) {
		switch (frm[i]) {
			case '%': {				
					switch (frm[++i]) {					
						case 'd': {
							int x = va_arg(arg, int), temp = 0;
							while (x) {
							temp = temp * 10 + x % 10;
							x /= 10;
						}
						while (temp) {						
						PUTC(temp % 10 + '0');
							temp /= 10;
						}
					} break;
					case '%': {
						PUTC(frm[i]); 	 
					} break;
				}
			} break;
			default: PUTC(frm[i]); break;
		}
	}
	va_end(arg);
	return cnt;
}
int main() {
	printf("hello world\n");
	my_printf("hello world\n");
	printf("%d\n", a);
	my_printf("%d\n", a);
	return 0;
}
