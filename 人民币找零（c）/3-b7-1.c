/*2251311 ��12 �ﻪ�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	double m;
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, k;
	printf( "%s","����������ֵ��\n");
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

	printf("%s", "��");
	printf("%d", k);
	printf("%s","�����㣬�������£�\n" );
	if (a1 > 0) {
		printf("%-5s", "50Ԫ");
		printf("%s", " : ");
		printf("%d", a1);
		printf("%s", "��\n");
	}
	if (a2 > 0){
		printf("%-5s", "20Ԫ");
		printf("%s", " : ");
		printf("%d", a2);
		printf("%s", "��\n");
	}
		
	if (a3 > 0) {
		printf("%-5s", "10Ԫ");
		printf("%s", " : ");
		printf("%d", a3);
		printf("%s", "��\n");
	}
	if (a4 > 0){
		printf("%-5s", "5Ԫ");
		printf("%s", " : ");
		printf("%d", a4);
		printf("%s", "��\n");
	}
	if (a5 > 0){
		printf("%-5s", "1Ԫ");
		printf("%s", " : ");
		printf("%d", a5);
		printf("%s", "��\n");
	}
	if (a6 > 0){
		printf("%-5s", "5��");
		printf("%s", " : ");
		printf("%d", a6);
		printf("%s", "��\n");
	}
	if (a7 > 0){
		printf("%-5s", "1��");
		printf("%s", " : ");
		printf("%d", a7);
		printf("%s", "��\n");
	}
	if (a8 > 0){
		printf("%-5s", "5��");
		printf("%s", " : ");
		printf("%d", a8);
		printf("%s", "��\n");
	}
	if (a9 > 0){
		printf("%-5s", "2��");
		printf("%s", " : ");
		printf("%d", a9);
		printf("%s", "��\n");
	}
	if (a10 > 0){
		printf("%-5s", "1��");
		printf("%s", " : ");
		printf("%d", a10);
		printf("%s", "��\n");
	}
}