/*2251311 ��12 �ﻪ�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	printf("%s", "������[0-100��)֮�������:\n") ;
	int a, b, c, d, e, f, g, h, i, j, k, l, x, y;
	double m, n;
	scanf("%lf",&m);
	a = (int)(m / 1e9);//ʮ��
	b = (int)(m / 1e8) - 10 * a;//��
	c = (int)(m / 1e7) - 10 * b - 100 * a;//ǧ��
	d = (int)(m / 1e6) - 10 * c - 100 * b - 1000 * a;//����
	e = (int)(m / 1e5) - 10 * d - 100 * c - 1000 * b - 10000 * a;//ʮ��
	n = m - 1e9 * a - 1e8 * b - 1e7 * c - 1e6 * d - 1e5 * e;
	x = (int)(n * 1000 + 1);
	f = (int)(x / 1e7);//��

	g = (int)(x / 1e6) - 10 * f;//ǧ
	h = (int)(x / 1e5) - 10 * g - 100 * f;//�� 
	i = (int)(x / 1e4) - 10 * h - 100 * g - 1000 * f;//ʮ
	j = (int)(x / 1000) - 10 * i - 100 * h - 1000 * g - 10000 * f;//Բ
	y = (int)(x - 1e7 * f - 1e6 * g - 1e5 * h - 1e4 * i - 1000 * j);
	k = y / 100;//��
	l = y / 10 - 10 * k;//��
	switch (a) {
		case(0):
			break;
		case(1):
			printf("%s", "Ҽʮ");
			break;
		case(2):
			printf("%s", "��ʮ");
			break;
		case(3):
			printf("%s", "��ʮ");
			break;
		case(4):
			printf("%s", "��ʮ");
			break;
		case(5):
			printf("%s", "��ʮ");;
			break;
		case(6):
			printf("%s", "½ʮ");
			break;
		case(7):
			printf("%s", "��ʮ");
			break;
		case(8):
			printf("%s", "��ʮ");
			break;
		case(9):
			printf("%s", "��ʮ");
			break;
	}
	switch (b) {
		case(0):
			if (a != 0)
				printf("%s", "��");
			break;
		case(1):
			printf("%s", "Ҽ��");
			break;
		case(2):
			printf("%s", "����");
			break;
		case(3):
			printf("%s", "����");
			break;
		case(4):
			printf("%s", "����");
			break;
		case(5):
			printf("%s", "����");
			break;
		case(6):
			printf("%s", "½��");
			break;
		case(7):
			printf("%s", "����");
			break;
		case(8):
			printf("%s", "����");
			break;
		case(9):
			printf("%s", "����");
			break;
	}
	switch (c) {
		case(1):
			printf("%s", "ҼǪ");
			break;
		case(2):
			printf("%s", "��Ǫ");
			break;
		case(3):
			printf("%s", "��Ǫ");
			break;
		case(4):
			printf("%s", "��Ǫ");
			break;
		case(5):
			printf("%s", "��Ǫ");
			break;
		case(6):
			printf("%s", "½Ǫ");
			break;
		case(7):
			printf("%s", "��Ǫ");
			break;
		case(8):
			printf("%s", "��Ǫ");
			break;
		case(9):
			printf("%s", "��Ǫ");
			break;
		case(0):
			if (a != 0 || b != 0)
				printf("%s", "��");
	}
	switch (d) {
		case(1):
			printf("%s", "Ҽ��");
			break;
		case(2):
			printf("%s", "����");
			break;
		case(3):
			printf("%s", "����");
			break;
		case(4):
			printf("%s", "����");
			break;
		case(5):
			printf("%s", "���");
			break;
		case(6):
			printf("%s", "½��");
			break;
		case(7):
			printf("%s", "���");
			break;
		case(8):
			printf("%s", "�ư�");
			break;
		case(9):
			printf("%s", "����");
			break;
		case(0):
			if (c != 0)
				printf("%s", "��");
			break;
	}
	switch (e) {
		case(1):
			printf("%s", "Ҽʮ");
			break;
		case(2):
			printf("%s", "��ʮ");
			break;
		case(3):
			printf("%s", "��ʮ");
			break;
		case(4):
			printf("%s", "��ʮ");
			break;
		case(5):
			printf("%s", "��ʮ");;
			break;
		case(6):
			printf("%s", "½ʮ");
			break;
		case(7):
			printf("%s", "��ʮ");
			break;
		case(8):
			printf("%s", "��ʮ");
			break;
		case(9):
			printf("%s", "��ʮ");
			break;
		case(0):
			if (d != 0)
				printf("%s", "��");
			break;
	}
	switch (f) {
		case(1):
			printf("%s", "Ҽ��");
			break;
		case(2):
			printf("%s", "����");
			break;
		case(3):
			printf("%s", "����");
			break;
		case(4):
			printf("%s", "����");
			break;
		case(5):
			printf("%s", "����");
			break;
		case(6):
			printf("%s", "½��");
			break;
		case(7):
			printf("%s", "����");
			break;
		case(8):
			printf("%s", "����");
			break;
		case(9):
			printf("%s", "����");
			break;
		case(0):
			if (e != 0)
				printf("%s", "��");
			break;
	}
	switch (g) {
		case(1):
			printf("%s", "ҼǪ");
			break;
		case(2):
			printf("%s", "��Ǫ");
			break;
		case(3):
			printf("%s", "��Ǫ");
			break;
		case(4):
			printf("%s", "��Ǫ");
			break;
		case(5):
			printf("%s", "��Ǫ");
			break;
		case(6):
			printf("%s", "½Ǫ");
			break;
		case(7):
			printf("%s", "��Ǫ");
			break;
		case(8):
			printf("%s", "��Ǫ");
			break;
		case(9):
			printf("%s", "��Ǫ");
			break;
		case(0):
			if (f != 0)
				printf("%s", "��");
			break;
	}
	switch (h) {
		case(1):
			printf("%s", "Ҽ��");
			break;
		case(2):
			printf("%s", "����");
			break;
		case(3):
			printf("%s", "����");
			break;
		case(4):
			printf("%s", "����");
			break;
		case(5):
			printf("%s", "���");
			break;
		case(6):
			printf("%s", "½��");
			break;
		case(7):
			printf("%s", "���");
			break;
		case(8):
			printf("%s", "�ư�");
			break;
		case(9):
			printf("%s", "����");
			break;
		case(0):
			if (g != 0)
				printf("%s", "��");
			break;
	}
	switch (i) {
		case(1):
			printf("%s", "Ҽʮ");
			break;
		case(2):
			printf("%s", "��ʮ");
			break;
		case(3):
			printf("%s", "��ʮ");
			break;
		case(4):
			printf("%s", "��ʮ");
			break;
		case(5):
			printf("%s", "��ʮ");;
			break;
		case(6):
			printf("%s", "½ʮ");
			break;
		case(7):
			printf("%s", "��ʮ");
			break;
		case(8):
			printf("%s", "��ʮ");
			break;
		case(9):
			printf("%s", "��ʮ");
			break;
		case(0):
			if (h != 0)
				printf("%s", "��");
			break;
	}
	switch (j) {
		case(1):
			printf("%s", "ҼԲ");
			break;
		case(2):
			printf("%s", "��Բ");
			break;
		case(3):
			printf("%s", "��Բ");
			break;
		case(4):
			printf("%s", "��Բ");
			break;
		case(5):
			printf("%s", "��Բ");;
			break;
		case(6):
			printf("%s", "½Բ");
			break;
		case(7):
			printf("%s", "��Բ");
			break;
		case(8):
			printf("%s", "��Բ");
			break;
		case(9):
			printf("%s", "��Բ");
			break;
		case(0):
			break;
	}
	if (k == 0 && l == 0)
		printf("%s", "��");
	else if (k != 0 && l == 0) {
		switch (k) {
			case(1):
				printf("%s", "Ҽ��");
				break;
			case(2):
				printf("%s", "����");
				break;
			case(3):
				printf("%s", "����");
				break;
			case(4):
				printf("%s", "����");
				break;
			case(5):
				printf("%s", "���");;
				break;
			case(6):
				printf("%s", "½��");
				break;
			case(7):
				printf("%s", "���");
				break;
			case(8):
				printf("%s", "�ƽ�");
				break;
			case(9):
				printf("%s", "����");
				break;
		}
		printf("%s", "��");
	}
	else {
		switch (k) {
			case(0):
				break;
			case(1):
				printf("%s", "Ҽ��");
				break;
			case(2):
				printf("%s", "����");
				break;
			case(3):
				printf("%s", "����");
				break;
			case(4):
				printf("%s", "����");
				break;
			case(5):
				printf("%s", "���");;
				break;
			case(6):
				printf("%s", "½��");
				break;
			case(7):
				printf("%s", "���");
				break;
			case(8):
				printf("%s", "�ƽ�");
				break;
			case(9):
				printf("%s", "����");
				break;
		}
		switch (l) {
			case(1):
				printf("%s", "Ҽ��");
				break;
			case(2):
				printf("%s", "����");
				break;
			case(3):
				printf("%s", "����");
				break;
			case(4):
				printf("%s", "����");
				break;
			case(5):
				printf("%s", "���");;
				break;
			case(6):
				printf("%s", "½��");
				break;
			case(7):
				printf("%s", "���");
				break;
			case(8):
				printf("%s", "�Ʒ�");
				break;
			case(9):
				printf("%s", "����");
				break;
		}
	}
	return 0;
}