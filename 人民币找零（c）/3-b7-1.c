/*2251311 信12 孙华宏 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	double m;
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, k;
	printf( "%s","请输入找零值：\n");
	scanf("%lf",&m);
	k = 0;
	a1 = (int)(m / 50.0);
	k = k + a1;

	a2 = (int)((m - 50.0 * a1) / 20.0);
	k = k + a2;

	a3 = (int)((m - 50.0 * a1 - 20.0 * a2)) / 10;
	k = k + a3;

	a4 = (int)((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3)) / 5;
	k = k + a4;

	a5 = (int)((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3 - 5.0 * a4)) / 1;
	k = k + a5;

	a6 = (int)((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3 - 5.0 * a4 - 1.0 * a5) * 100) / 50;
	k = k + a6;

	a7 = (int)((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3 - 5.0 * a4 - 1.0 * a5) * 100 - a6 * 50.0) / 10;
	k = k + a7;

	a8 = (int)((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3 - 5.0 * a4 - 1.0 * a5) * 100 - a6 * 50.0 - a7 * 10) / 5;
	k = k + a8;

	a9 = (int)((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3 - 5.0 * a4 - 1.0 * a5) * 100 - a6 * 50.0 - a7 * 10 - a8 * 5) / 2;
	k = k + a9;

	a10 = (int)((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3 - 5.0 * a4 - 1.0 * a5) * 100 - a6 * 50.0 - a7 * 10 - a8 * 5 - a9 * 2) / 1;
	k = k + a9;

	printf("%s", "共");
	printf("%d", k);
	printf("%s","张找零，具体如下：\n" );
	if (a1 > 0) {
		printf("%-5s", "50元");
		printf("%s", " : ");
		printf("%d", a1);
		printf("%s", "张\n");
	}
	if (a2 > 0){
		printf("%-5s", "20元");
		printf("%s", " : ");
		printf("%d", a2);
		printf("%s", "张\n");
	}
		
	if (a3 > 0) {
		printf("%-5s", "10元");
		printf("%s", " : ");
		printf("%d", a3);
		printf("%s", "张\n");
	}
	if (a4 > 0){
		printf("%-5s", "5元");
		printf("%s", " : ");
		printf("%d", a4);
		printf("%s", "张\n");
	}
	if (a5 > 0){
		printf("%-5s", "1元");
		printf("%s", " : ");
		printf("%d", a5);
		printf("%s", "张\n");
	}
	if (a6 > 0){
		printf("%-5s", "5角");
		printf("%s", " : ");
		printf("%d", a6);
		printf("%s", "张\n");
	}
	if (a7 > 0){
		printf("%-5s", "1角");
		printf("%s", " : ");
		printf("%d", a7);
		printf("%s", "张\n");
	}
	if (a8 > 0){
		printf("%-5s", "5分");
		printf("%s", " : ");
		printf("%d", a8);
		printf("%s", "张\n");
	}
	if (a9 > 0){
		printf("%-5s", "2分");
		printf("%s", " : ");
		printf("%d", a9);
		printf("%s", "张\n");
	}
	if (a10 > 0){
		printf("%-5s", "1分");
		printf("%s", " : ");
		printf("%d", a10);
		printf("%s", "张\n");
	}
}