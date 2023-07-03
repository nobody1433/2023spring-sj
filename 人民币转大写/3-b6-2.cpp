/*2251311 ĞÅ12 Ëï»ªºê */
#include <iostream>
using namespace std;

int main() {
	cout << "ÇëÊäÈë[0-100ÒÚ)Ö®¼äµÄÊı×Ö:" << endl;
	int a, b, c, d, e, f, g, h, i, j, k, l, x, y;
	double m, n;
	cin >> m;
	a = int(m / 1e9);//Ê®ÒÚ
	b = int(m / 1e8) - 10 * a;//ÒÚ
	c = int(m / 1e7) - 10 * b - 100 * a;//Ç§Íò
	d = int(m / 1e6) - 10 * c - 100 * b - 1000 * a;//°ÙÍò
	e = int(m / 1e5) - 10 * d - 100 * c - 1000 * b - 10000 * a;//Ê®Íò
	n = m - 1e9 * a - 1e8 * b - 1e7 * c - 1e6 * d - 1e5 * e;
	x = int(n * 1000 + 1);
	f = int(x / 1e7);//Íò

	g = int(x / 1e6) - 10 * f;//Ç§
	h = int(x / 1e5) - 10 * g - 100 * f;//°Ù 
	i = int(x / 1e4) - 10 * h - 100 * g - 1000 * f;//Ê®
	j = int(x / 1000) - 10 * i - 100 * h - 1000 * g - 10000 * f;//Ô²
	y = int(x - 1e7 * f - 1e6 * g - 1e5 * h - 1e4 * i - 1000 * j);
	k = y / 100;//½Ç
	l = y / 10 - 10 * k;//·Ö
	switch (a) {
		case(0):
			break;
		case(1):
			cout << "Ò¼Ê®";
			break;
		case(2):
			cout << "·¡Ê®";
			break;
		case(3):
			cout << "ÈşÊ®";
			break;
		case(4):
			cout << "ËÁÊ®";
			break;
		case(5):
			cout << "ÎéÊ®";
			break;
		case(6):
			cout << "Â½Ê®";
			break;
		case(7):
			cout << "ÆâÊ®";
			break;
		case(8):
			cout << "°ÆÊ®";
			break;
		case(9):
			cout << "¾ÁÊ®";
			break;
	}
	switch (b) {
		case(0):
			if (a != 0)
				cout << "ÒÚ";
			break;
		case(1):
			cout << "Ò¼ÒÚ";
			break;
		case(2):
			cout << "·¡ÒÚ";
			break;
		case(3):
			cout << "ÈşÒÚ";
			break;
		case(4):
			cout << "ËÁÒÚ";
			break;
		case(5):
			cout << "ÎéÒÚ";
			break;
		case(6):
			cout << "Â½ÒÚ";
			break;
		case(7):
			cout << "ÆâÒÚ";
			break;
		case(8):
			cout << "°ÆÒÚ";
			break;
		case(9):
			cout << "¾ÁÒÚ";
			break;
	}
	switch (c) {
		case(1):
			cout << "Ò¼Çª";
				break;
		case(2):
			cout << "·¡Çª";
			break;
		case(3):
			cout << "ÈşÇª";
			break;
		case(4):
			cout << "ËÁÇª";
			break;
		case(5):
			cout << "ÎéÇª";
			break;
		case(6):
			cout << "Â½Çª";
			break;
		case(7):
			cout << "ÆâÇª";
			break;
		case(8):
			cout << "°ÆÇª";
			break;
		case(9):
			cout << "¾ÁÇª";
			break;
		case(0):
			if(a!=0||b!=0)
			cout << "Áã";
			break;
	}
	switch (d) {
		case(1):
			cout << "Ò¼°Û";
			break;
		case(2):
			cout << "·¡°Û";
			break;
		case(3):
			cout << "Èş°Û";
			break;
		case(4):
			cout << "ËÁ°Û";
			break;
		case(5):
			cout << "Îé°Û";
			break;
		case(6):
			cout << "Â½°Û";
			break;
		case(7):
			cout << "Æâ°Û";
			break;
		case(8):
			cout << "°Æ°Û";
			break;
		case(9):
			cout << "¾Á°Û";
			break;
		case(0):
			if (c != 0)
				cout << "Áã";
			break;
	}
	switch (e) {
		case(1):
			cout << "Ò¼Ê®";
			break;
		case(2):
			cout << "·¡Ê®";
			break;
		case(3):
			cout << "ÈşÊ®";
			break;
		case(4):
			cout << "ËÁÊ®";
			break;
		case(5):
			cout << "ÎéÊ®";
			break;
		case(6):
			cout << "Â½Ê®";
			break;
		case(7):
			cout << "ÆâÊ®";
			break;
		case(8):
			cout << "°ÆÊ®";
			break;
		case(9):
			cout << "¾ÁÊ®";
			break;
		case(0):
			if (d != 0)
				cout << "Áã";
			break;
	}
	switch (f) {
		case(1):
			cout << "Ò¼Íò";
			break;
		case(2):
			cout << "·¡Íò";
			break;
		case(3):
			cout << "ÈşÍò";
			break;
		case(4):
			cout << "ËÁÍò";
			break;
		case(5):
			cout << "ÎéÍò";
			break;
		case(6):
			cout << "Â½Íò";
			break;
		case(7):
			cout << "ÆâÍò";
			break;
		case(8):
			cout << "°ÆÍò";
			break;
		case(9):
			cout << "¾ÁÍò";
			break;
		case(0):
			if (e != 0)
				cout << "Áã";
			break;
	}
	switch (g) {
		case(1):
			cout << "Ò¼Çª";
			break;
		case(2):
			cout << "·¡Çª";
			break;
		case(3):
			cout << "ÈşÇª";
			break;
		case(4):
			cout << "ËÁÇª";
			break;
		case(5):
			cout << "ÎéÇª";
			break;
		case(6):
			cout << "Â½Çª";
			break;
		case(7):
			cout << "ÆâÇª";
			break;
		case(8):
			cout << "°ÆÇª";
			break;
		case(9):
			cout << "¾ÁÇª";
			break;
		case(0):
			if (f != 0)
				cout << "Áã";
			break;
	}
	switch (h) {
		case(1):
			cout << "Ò¼°Û";
			break;
		case(2):
			cout << "·¡°Û";
			break;
		case(3):
			cout << "Èş°Û";
			break;
		case(4):
			cout << "ËÁ°Û";
			break;
		case(5):
			cout << "Îé°Û";
			break;
		case(6):
			cout << "Â½°Û";
			break;
		case(7):
			cout << "Æâ°Û";
			break;
		case(8):
			cout << "°Æ°Û";
			break;
		case(9):
			cout << "¾Á°Û";
			break;
		case(0):
			if (g != 0)
				cout << "Áã";
			break;
	}
	switch (i) {
		case(1):
			cout << "Ò¼Ê®";
			break;
		case(2):
			cout << "·¡Ê®";
			break;
		case(3):
			cout << "ÈşÊ®";
			break;
		case(4):
			cout << "ËÁÊ®";
			break;
		case(5):
			cout << "ÎéÊ®";
			break;
		case(6):
			cout << "Â½Ê®";
			break;
		case(7):
			cout << "ÆâÊ®";
			break;
		case(8):
			cout << "°ÆÊ®";
			break;
		case(9):
			cout << "¾ÁÊ®";
			break;
		case(0):
			if (h != 0)
				cout << "Áã";
			break;
	}
	switch (j) {
		case(1):
			cout << "Ò¼Ô²";
			break;
		case(2):
			cout << "·¡Ô²";
			break;
		case(3):
			cout << "ÈşÔ²";
			break;
		case(4):
			cout << "ËÁÔ²";
			break;
		case(5):
			cout << "ÎéÔ²";
			break;
		case(6):
			cout << "Â½Ô²";
			break;
		case(7):
			cout << "ÆâÔ²";
			break;
		case(8):
			cout << "°ÆÔ²";
			break;
		case(9):
			cout << "¾ÁÔ²";
			break;
		case(0):
			break;
	}
	if (k == 0 && l == 0)
		cout << "Õû";
	else if (k != 0 && l == 0) {
		switch (k) {
			case(1):
				cout << "Ò¼½Ç";
				break;
			case(2):
				cout << "·¡½Ç";
				break;
			case(3):
				cout << "Èş½Ç";
				break;
			case(4):
				cout << "ËÁ½Ç";
				break;
			case(5):
				cout << "Îé½Ç";
				break;
			case(6):
				cout << "Â½½Ç";
				break;
			case(7):
				cout << "Æâ½Ç";
				break;
			case(8):
				cout << "°Æ½Ç";
				break;
			case(9):
				cout << "¾Á½Ç";
				break;
		}
		cout << "Õû";
	}
	else {
		switch (k) {
			case(0):
				break;
			case(1):
				cout << "Ò¼½Ç";
				break;
			case(2):
				cout << "·¡½Ç";
				break;
			case(3):
				cout << "Èş½Ç";
				break;
			case(4):
				cout << "ËÁ½Ç";
				break;
			case(5):
				cout << "Îé½Ç";
				break;
			case(6):
				cout << "Â½½Ç";
				break;
			case(7):
				cout << "Æâ½Ç";
				break;
			case(8):
				cout << "°Æ½Ç";
				break;
			case(9):
				cout << "¾Á½Ç";
				break;
		}
		switch (l) {
			case(1):
				cout << "Ò¼·Ö";
				break;
			case(2):
				cout << "·¡·Ö";
				break;
			case(3):
				cout << "Èş·Ö";
				break;
			case(4):
				cout << "ËÁ·Ö";
				break;
			case(5):
				cout << "Îé·Ö";
				break;
			case(6):
				cout << "Â½·Ö";
				break;
			case(7):
				cout << "Æâ·Ö";
				break;
			case(8):
				cout << "°Æ·Ö";
				break;
			case(9):
				cout << "¾Á·Ö";
				break;
		}
	}
	return 0;
}