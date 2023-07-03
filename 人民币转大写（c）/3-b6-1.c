/*2251311 ĞÅ12 Ëï»ªºê */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	printf("%s", "ÇëÊäÈë[0-100ÒÚ)Ö®¼äµÄÊı×Ö:\n") ;
	int a, b, c, d, e, f, g, h, i, j, k, l, x, y;
	double m, n;
	scanf("%lf",&m);
	a = (int)(m / 1e9);//Ê®ÒÚ
	b = (int)(m / 1e8) - 10 * a;//ÒÚ
	c = (int)(m / 1e7) - 10 * b - 100 * a;//Ç§Íò
	d = (int)(m / 1e6) - 10 * c - 100 * b - 1000 * a;//°ÙÍò
	e = (int)(m / 1e5) - 10 * d - 100 * c - 1000 * b - 10000 * a;//Ê®Íò
	n = m - 1e9 * a - 1e8 * b - 1e7 * c - 1e6 * d - 1e5 * e;
	x = (int)(n * 1000 + 1);
	f = (int)(x / 1e7);//Íò

	g = (int)(x / 1e6) - 10 * f;//Ç§
	h = (int)(x / 1e5) - 10 * g - 100 * f;//°Ù 
	i = (int)(x / 1e4) - 10 * h - 100 * g - 1000 * f;//Ê®
	j = (int)(x / 1000) - 10 * i - 100 * h - 1000 * g - 10000 * f;//Ô²
	y = (int)(x - 1e7 * f - 1e6 * g - 1e5 * h - 1e4 * i - 1000 * j);
	k = y / 100;//½Ç
	l = y / 10 - 10 * k;//·Ö
	switch (a) {
		case(0):
			break;
		case(1):
			printf("%s", "Ò¼Ê®");
			break;
		case(2):
			printf("%s", "·¡Ê®");
			break;
		case(3):
			printf("%s", "ÈşÊ®");
			break;
		case(4):
			printf("%s", "ËÁÊ®");
			break;
		case(5):
			printf("%s", "ÎéÊ®");;
			break;
		case(6):
			printf("%s", "Â½Ê®");
			break;
		case(7):
			printf("%s", "ÆâÊ®");
			break;
		case(8):
			printf("%s", "°ÆÊ®");
			break;
		case(9):
			printf("%s", "¾ÁÊ®");
			break;
	}
	switch (b) {
		case(0):
			if (a != 0)
				printf("%s", "ÒÚ");
			break;
		case(1):
			printf("%s", "Ò¼ÒÚ");
			break;
		case(2):
			printf("%s", "·¡ÒÚ");
			break;
		case(3):
			printf("%s", "ÈşÒÚ");
			break;
		case(4):
			printf("%s", "ËÁÒÚ");
			break;
		case(5):
			printf("%s", "ÎéÒÚ");
			break;
		case(6):
			printf("%s", "Â½ÒÚ");
			break;
		case(7):
			printf("%s", "ÆâÒÚ");
			break;
		case(8):
			printf("%s", "°ÆÒÚ");
			break;
		case(9):
			printf("%s", "¾ÁÒÚ");
			break;
	}
	switch (c) {
		case(1):
			printf("%s", "Ò¼Çª");
			break;
		case(2):
			printf("%s", "·¡Çª");
			break;
		case(3):
			printf("%s", "ÈşÇª");
			break;
		case(4):
			printf("%s", "ËÁÇª");
			break;
		case(5):
			printf("%s", "ÎéÇª");
			break;
		case(6):
			printf("%s", "Â½Çª");
			break;
		case(7):
			printf("%s", "ÆâÇª");
			break;
		case(8):
			printf("%s", "°ÆÇª");
			break;
		case(9):
			printf("%s", "¾ÁÇª");
			break;
		case(0):
			if (a != 0 || b != 0)
				printf("%s", "Áã");
	}
	switch (d) {
		case(1):
			printf("%s", "Ò¼°Û");
			break;
		case(2):
			printf("%s", "·¡°Û");
			break;
		case(3):
			printf("%s", "Èş°Û");
			break;
		case(4):
			printf("%s", "ËÁ°Û");
			break;
		case(5):
			printf("%s", "Îé°Û");
			break;
		case(6):
			printf("%s", "Â½°Û");
			break;
		case(7):
			printf("%s", "Æâ°Û");
			break;
		case(8):
			printf("%s", "°Æ°Û");
			break;
		case(9):
			printf("%s", "¾Á°Û");
			break;
		case(0):
			if (c != 0)
				printf("%s", "Áã");
			break;
	}
	switch (e) {
		case(1):
			printf("%s", "Ò¼Ê®");
			break;
		case(2):
			printf("%s", "·¡Ê®");
			break;
		case(3):
			printf("%s", "ÈşÊ®");
			break;
		case(4):
			printf("%s", "ËÁÊ®");
			break;
		case(5):
			printf("%s", "ÎéÊ®");;
			break;
		case(6):
			printf("%s", "Â½Ê®");
			break;
		case(7):
			printf("%s", "ÆâÊ®");
			break;
		case(8):
			printf("%s", "°ÆÊ®");
			break;
		case(9):
			printf("%s", "¾ÁÊ®");
			break;
		case(0):
			if (d != 0)
				printf("%s", "Áã");
			break;
	}
	switch (f) {
		case(1):
			printf("%s", "Ò¼Íò");
			break;
		case(2):
			printf("%s", "·¡Íò");
			break;
		case(3):
			printf("%s", "ÈşÍò");
			break;
		case(4):
			printf("%s", "ËÁÍò");
			break;
		case(5):
			printf("%s", "ÎéÍò");
			break;
		case(6):
			printf("%s", "Â½Íò");
			break;
		case(7):
			printf("%s", "ÆâÍò");
			break;
		case(8):
			printf("%s", "°ÆÍò");
			break;
		case(9):
			printf("%s", "¾ÁÍò");
			break;
		case(0):
			if (e != 0)
				printf("%s", "Áã");
			break;
	}
	switch (g) {
		case(1):
			printf("%s", "Ò¼Çª");
			break;
		case(2):
			printf("%s", "·¡Çª");
			break;
		case(3):
			printf("%s", "ÈşÇª");
			break;
		case(4):
			printf("%s", "ËÁÇª");
			break;
		case(5):
			printf("%s", "ÎéÇª");
			break;
		case(6):
			printf("%s", "Â½Çª");
			break;
		case(7):
			printf("%s", "ÆâÇª");
			break;
		case(8):
			printf("%s", "°ÆÇª");
			break;
		case(9):
			printf("%s", "¾ÁÇª");
			break;
		case(0):
			if (f != 0)
				printf("%s", "Áã");
			break;
	}
	switch (h) {
		case(1):
			printf("%s", "Ò¼°Û");
			break;
		case(2):
			printf("%s", "·¡°Û");
			break;
		case(3):
			printf("%s", "Èş°Û");
			break;
		case(4):
			printf("%s", "ËÁ°Û");
			break;
		case(5):
			printf("%s", "Îé°Û");
			break;
		case(6):
			printf("%s", "Â½°Û");
			break;
		case(7):
			printf("%s", "Æâ°Û");
			break;
		case(8):
			printf("%s", "°Æ°Û");
			break;
		case(9):
			printf("%s", "¾Á°Û");
			break;
		case(0):
			if (g != 0)
				printf("%s", "Áã");
			break;
	}
	switch (i) {
		case(1):
			printf("%s", "Ò¼Ê®");
			break;
		case(2):
			printf("%s", "·¡Ê®");
			break;
		case(3):
			printf("%s", "ÈşÊ®");
			break;
		case(4):
			printf("%s", "ËÁÊ®");
			break;
		case(5):
			printf("%s", "ÎéÊ®");;
			break;
		case(6):
			printf("%s", "Â½Ê®");
			break;
		case(7):
			printf("%s", "ÆâÊ®");
			break;
		case(8):
			printf("%s", "°ÆÊ®");
			break;
		case(9):
			printf("%s", "¾ÁÊ®");
			break;
		case(0):
			if (h != 0)
				printf("%s", "Áã");
			break;
	}
	switch (j) {
		case(1):
			printf("%s", "Ò¼Ô²");
			break;
		case(2):
			printf("%s", "·¡Ô²");
			break;
		case(3):
			printf("%s", "ÈşÔ²");
			break;
		case(4):
			printf("%s", "ËÁÔ²");
			break;
		case(5):
			printf("%s", "ÎéÔ²");;
			break;
		case(6):
			printf("%s", "Â½Ô²");
			break;
		case(7):
			printf("%s", "ÆâÔ²");
			break;
		case(8):
			printf("%s", "°ÆÔ²");
			break;
		case(9):
			printf("%s", "¾ÁÔ²");
			break;
		case(0):
			break;
	}
	if (k == 0 && l == 0)
		printf("%s", "Õû");
	else if (k != 0 && l == 0) {
		switch (k) {
			case(1):
				printf("%s", "Ò¼½Ç");
				break;
			case(2):
				printf("%s", "·¡½Ç");
				break;
			case(3):
				printf("%s", "Èş½Ç");
				break;
			case(4):
				printf("%s", "ËÁ½Ç");
				break;
			case(5):
				printf("%s", "Îé½Ç");;
				break;
			case(6):
				printf("%s", "Â½½Ç");
				break;
			case(7):
				printf("%s", "Æâ½Ç");
				break;
			case(8):
				printf("%s", "°Æ½Ç");
				break;
			case(9):
				printf("%s", "¾Á½Ç");
				break;
		}
		printf("%s", "Õû");
	}
	else {
		switch (k) {
			case(0):
				break;
			case(1):
				printf("%s", "Ò¼½Ç");
				break;
			case(2):
				printf("%s", "·¡½Ç");
				break;
			case(3):
				printf("%s", "Èş½Ç");
				break;
			case(4):
				printf("%s", "ËÁ½Ç");
				break;
			case(5):
				printf("%s", "Îé½Ç");;
				break;
			case(6):
				printf("%s", "Â½½Ç");
				break;
			case(7):
				printf("%s", "Æâ½Ç");
				break;
			case(8):
				printf("%s", "°Æ½Ç");
				break;
			case(9):
				printf("%s", "¾Á½Ç");
				break;
		}
		switch (l) {
			case(1):
				printf("%s", "Ò¼·Ö");
				break;
			case(2):
				printf("%s", "·¡·Ö");
				break;
			case(3):
				printf("%s", "Èş·Ö");
				break;
			case(4):
				printf("%s", "ËÁ·Ö");
				break;
			case(5):
				printf("%s", "Îé·Ö");;
				break;
			case(6):
				printf("%s", "Â½·Ö");
				break;
			case(7):
				printf("%s", "Æâ·Ö");
				break;
			case(8):
				printf("%s", "°Æ·Ö");
				break;
			case(9):
				printf("%s", "¾Á·Ö");
				break;
		}
	}
	return 0;
}