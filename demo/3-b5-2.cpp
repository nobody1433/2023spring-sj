/*2251311 ��12 �ﻪ�� */
#include <iostream>
using namespace std;

int main()
{
	int n, y, r,k;
	cout << "�������꣬�£���\n";
	cin >> n >> y >> r;
	k = 0;
	if (n / 4 == 0 || n / 400 == 0 && n / 100 != 0) {//����ļ���
		if (y <= 12 && y >= 1) {//�·������ȷ
			if (y == 2) {
				if (r <= 29 && r >= 1) {//�������ȷ
					k = 31 + r;
					cout << n << "-" << y << "-" << r << "��" << n << "��ĵ�" << k << "��";
				}
				else {
					cout << "������� - �����µĹ�ϵ�Ƿ�";
				}
			}
			else if (y == 4 || y == 6 || y == 9 || y == 11) {
				if (r <= 30 && r >= 1) {//�������ȷ
					switch (y) {
						case 4:
							k = 2 * 31 + r + 29;
							break;
						case 6:
							k = 3 * 31 + r + 29 + 30;
							break;
						case 9:
							k = 5 * 31 + r + 29 + 30 * 2;
							break;
						case 11:
							k = 6 * 31 + r + 29 + 30 * 3;
							break;
					}
					cout << n << "-" << y << "-" << r << "��" << n << "��ĵ�" << k << "��";
				}
				else {
					cout << "������� - �����µĹ�ϵ�Ƿ�";
				}
			}
			else {
				if (r <= 31 && r >= 1) {//�������ȷ
					switch (y) {
						case 1:
							k =  r ;
							break;
						case 3:
							k =  r + 29 + 31;
							break;
						case 5:
							k = 2 * 31 + r + 29 + 30;
							break;
						case 7:
							k = 3 * 31 + r + 29 + 30 * 2;
							break;
						case 8:
							k = 4 * 31 + r + 29 + 30 * 2;
							break;
						case 10:
							k = 5 * 31 + r + 29 + 30 * 3;
							break; 
						case 12:
							k = 6 * 31 + r + 29 + 30 * 4;
							break;
					}
					cout << n<<"-"<< y <<"-"<<  r<<"��"<<n<<"��ĵ�"<<k<<"��";
				}
				else {
					cout << "������� - �����µĹ�ϵ�Ƿ�";
				}
			}
		}
		else {
			cout << "�������-�·ݲ���ȷ";
		}
	}
	else {
		if (y <= 12 && y >= 1) {//�·������ȷ
			if (y == 2) {
				if (r <= 28 && r >= 1) {//�������ȷ
					k = 31 + r;
					cout << n << "-" << y << "-" << r << "��" << n << "��ĵ�" << k << "��";
				}
				else {
					cout << "������� - �����µĹ�ϵ�Ƿ�";
				}
			}
			else if (y == 4 || y == 6 || y== 9 || y == 11) {
				if (r <= 30 && r >= 1) {//�������ȷ
					switch (y) {
						case 4:
							k = 2 * 31 + r + 28;
							break;
						case 6:
							k = 3 * 31 + r + 28 + 30;
							break;
						case 9:
							k = 5 * 31 + r + 28 + 30 * 2;
							break;
						case 11:
							k = 6 * 31 + r + 28 + 30 * 3;
							break;
					}
					cout << n << "-" << y << "-" << r << "��" << n << "��ĵ�" << k << "��";
				}
				else {
					cout << "������� - �����µĹ�ϵ�Ƿ�";
				}
			}
			else {
				if (r <= 31 && r >= 1) {//�������ȷ
					switch (y) {
						case 1:
							k = r;
							break;
						case 3:
							k = r + 28 + 31;
							break;
						case 5:
							k = 2 * 31 + r + 28 + 30;
							break;
						case 7:
							k = 3 * 31 + r + 28 + 30 * 2;
							break;
						case 8:
							k = 4 * 31 + r + 28 + 30 * 2;
							break;
						case 10:
							k = 5 * 31 + r + 28 + 30 * 3;
							break;
						case 12:
							k = 6 * 31 + r + 28 + 30 * 4;
							break;
					}
					cout << n << "-" << y << "-" << r << "��" << n << "��ĵ�" << k << "��";
				}
				else {
					cout << "������� - �����µĹ�ϵ�Ƿ�";
				}
			}
		}
		else {
			cout << "�������-�·ݲ���ȷ";
		}

	}
	return 0;
}
