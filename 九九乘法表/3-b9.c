/*2251311 ÐÅ12 Ëï»ªºê */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, c;
	for (b = 1; b <= 9; b++) {
		for (a = 1; a <= b; a++) {
			c = a * b;
			if (c < 10){
				printf("%d", a);
				printf("%s", "x");
				printf("%d", b);
				printf("%s", "=");
				printf("%-4d", c);
			}
			else {
				printf("%d", a);
				printf("%s", "x");
				printf("%d", b);
				printf("%s", "=");
				printf("%-4d", c);
			}
		}
		printf("%S", "\n");
	}
	return 0;

}