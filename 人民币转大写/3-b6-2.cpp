/*2251311 ��12 �ﻪ�� */
#include <iostream>
using namespace std;

int main() {
	cout << "������[0-100��)֮�������:" << endl;
	int a, b, c, d, e, f, g, h, i, j, k, l, x, y;
	double m, n;
	cin >> m;
	a = int(m / 1e9);//ʮ��
	b = int(m / 1e8) - 10 * a;//��
	c = int(m / 1e7) - 10 * b - 100 * a;//ǧ��
	d = int(m / 1e6) - 10 * c - 100 * b - 1000 * a;//����
	e = int(m / 1e5) - 10 * d - 100 * c - 1000 * b - 10000 * a;//ʮ��
	n = m - 1e9 * a - 1e8 * b - 1e7 * c - 1e6 * d - 1e5 * e;
	x = int(n * 1000 + 1);
	f = int(x / 1e7);//��

	g = int(x / 1e6) - 10 * f;//ǧ
	h = int(x / 1e5) - 10 * g - 100 * f;//�� 
	i = int(x / 1e4) - 10 * h - 100 * g - 1000 * f;//ʮ
	j = int(x / 1000) - 10 * i - 100 * h - 1000 * g - 10000 * f;//Բ
	y = int(x - 1e7 * f - 1e6 * g - 1e5 * h - 1e4 * i - 1000 * j);
	k = y / 100;//��
	l = y / 10 - 10 * k;//��
	switch (a) {
		case(0):
			break;
		case(1):
			cout << "Ҽʮ";
			break;
		case(2):
			cout << "��ʮ";
			break;
		case(3):
			cout << "��ʮ";
			break;
		case(4):
			cout << "��ʮ";
			break;
		case(5):
			cout << "��ʮ";
			break;
		case(6):
			cout << "½ʮ";
			break;
		case(7):
			cout << "��ʮ";
			break;
		case(8):
			cout << "��ʮ";
			break;
		case(9):
			cout << "��ʮ";
			break;
	}
	switch (b) {
		case(0):
			if (a != 0)
				cout << "��";
			break;
		case(1):
			cout << "Ҽ��";
			break;
		case(2):
			cout << "����";
			break;
		case(3):
			cout << "����";
			break;
		case(4):
			cout << "����";
			break;
		case(5):
			cout << "����";
			break;
		case(6):
			cout << "½��";
			break;
		case(7):
			cout << "����";
			break;
		case(8):
			cout << "����";
			break;
		case(9):
			cout << "����";
			break;
	}
	switch (c) {
		case(1):
			cout << "ҼǪ";
				break;
		case(2):
			cout << "��Ǫ";
			break;
		case(3):
			cout << "��Ǫ";
			break;
		case(4):
			cout << "��Ǫ";
			break;
		case(5):
			cout << "��Ǫ";
			break;
		case(6):
			cout << "½Ǫ";
			break;
		case(7):
			cout << "��Ǫ";
			break;
		case(8):
			cout << "��Ǫ";
			break;
		case(9):
			cout << "��Ǫ";
			break;
		case(0):
			if(a!=0||b!=0)
			cout << "��";
			break;
	}
	switch (d) {
		case(1):
			cout << "Ҽ��";
			break;
		case(2):
			cout << "����";
			break;
		case(3):
			cout << "����";
			break;
		case(4):
			cout << "����";
			break;
		case(5):
			cout << "���";
			break;
		case(6):
			cout << "½��";
			break;
		case(7):
			cout << "���";
			break;
		case(8):
			cout << "�ư�";
			break;
		case(9):
			cout << "����";
			break;
		case(0):
			if (c != 0)
				cout << "��";
			break;
	}
	switch (e) {
		case(1):
			cout << "Ҽʮ";
			break;
		case(2):
			cout << "��ʮ";
			break;
		case(3):
			cout << "��ʮ";
			break;
		case(4):
			cout << "��ʮ";
			break;
		case(5):
			cout << "��ʮ";
			break;
		case(6):
			cout << "½ʮ";
			break;
		case(7):
			cout << "��ʮ";
			break;
		case(8):
			cout << "��ʮ";
			break;
		case(9):
			cout << "��ʮ";
			break;
		case(0):
			if (d != 0)
				cout << "��";
			break;
	}
	switch (f) {
		case(1):
			cout << "Ҽ��";
			break;
		case(2):
			cout << "����";
			break;
		case(3):
			cout << "����";
			break;
		case(4):
			cout << "����";
			break;
		case(5):
			cout << "����";
			break;
		case(6):
			cout << "½��";
			break;
		case(7):
			cout << "����";
			break;
		case(8):
			cout << "����";
			break;
		case(9):
			cout << "����";
			break;
		case(0):
			if (e != 0)
				cout << "��";
			break;
	}
	switch (g) {
		case(1):
			cout << "ҼǪ";
			break;
		case(2):
			cout << "��Ǫ";
			break;
		case(3):
			cout << "��Ǫ";
			break;
		case(4):
			cout << "��Ǫ";
			break;
		case(5):
			cout << "��Ǫ";
			break;
		case(6):
			cout << "½Ǫ";
			break;
		case(7):
			cout << "��Ǫ";
			break;
		case(8):
			cout << "��Ǫ";
			break;
		case(9):
			cout << "��Ǫ";
			break;
		case(0):
			if (f != 0)
				cout << "��";
			break;
	}
	switch (h) {
		case(1):
			cout << "Ҽ��";
			break;
		case(2):
			cout << "����";
			break;
		case(3):
			cout << "����";
			break;
		case(4):
			cout << "����";
			break;
		case(5):
			cout << "���";
			break;
		case(6):
			cout << "½��";
			break;
		case(7):
			cout << "���";
			break;
		case(8):
			cout << "�ư�";
			break;
		case(9):
			cout << "����";
			break;
		case(0):
			if (g != 0)
				cout << "��";
			break;
	}
	switch (i) {
		case(1):
			cout << "Ҽʮ";
			break;
		case(2):
			cout << "��ʮ";
			break;
		case(3):
			cout << "��ʮ";
			break;
		case(4):
			cout << "��ʮ";
			break;
		case(5):
			cout << "��ʮ";
			break;
		case(6):
			cout << "½ʮ";
			break;
		case(7):
			cout << "��ʮ";
			break;
		case(8):
			cout << "��ʮ";
			break;
		case(9):
			cout << "��ʮ";
			break;
		case(0):
			if (h != 0)
				cout << "��";
			break;
	}
	switch (j) {
		case(1):
			cout << "ҼԲ";
			break;
		case(2):
			cout << "��Բ";
			break;
		case(3):
			cout << "��Բ";
			break;
		case(4):
			cout << "��Բ";
			break;
		case(5):
			cout << "��Բ";
			break;
		case(6):
			cout << "½Բ";
			break;
		case(7):
			cout << "��Բ";
			break;
		case(8):
			cout << "��Բ";
			break;
		case(9):
			cout << "��Բ";
			break;
		case(0):
			break;
	}
	if (k == 0 && l == 0)
		cout << "��";
	else if (k != 0 && l == 0) {
		switch (k) {
			case(1):
				cout << "Ҽ��";
				break;
			case(2):
				cout << "����";
				break;
			case(3):
				cout << "����";
				break;
			case(4):
				cout << "����";
				break;
			case(5):
				cout << "���";
				break;
			case(6):
				cout << "½��";
				break;
			case(7):
				cout << "���";
				break;
			case(8):
				cout << "�ƽ�";
				break;
			case(9):
				cout << "����";
				break;
		}
		cout << "��";
	}
	else {
		switch (k) {
			case(0):
				break;
			case(1):
				cout << "Ҽ��";
				break;
			case(2):
				cout << "����";
				break;
			case(3):
				cout << "����";
				break;
			case(4):
				cout << "����";
				break;
			case(5):
				cout << "���";
				break;
			case(6):
				cout << "½��";
				break;
			case(7):
				cout << "���";
				break;
			case(8):
				cout << "�ƽ�";
				break;
			case(9):
				cout << "����";
				break;
		}
		switch (l) {
			case(1):
				cout << "Ҽ��";
				break;
			case(2):
				cout << "����";
				break;
			case(3):
				cout << "����";
				break;
			case(4):
				cout << "����";
				break;
			case(5):
				cout << "���";
				break;
			case(6):
				cout << "½��";
				break;
			case(7):
				cout << "���";
				break;
			case(8):
				cout << "�Ʒ�";
				break;
			case(9):
				cout << "����";
				break;
		}
	}
	return 0;
}