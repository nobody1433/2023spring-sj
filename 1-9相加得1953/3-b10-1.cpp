/* ��12 2251311 �ﻪ��*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <windows.h> //ȡϵͳʱ��
using namespace std;

int main()
{
	LARGE_INTEGER tick, begin, end;

	QueryPerformanceFrequency(&tick);	//��ü�����Ƶ��
	QueryPerformanceCounter(&begin);	//��ó�ʼӲ������������

	/* �˴�����ĳ���ʼ */
    int a1, a2, a3;//��һ��������λ��
    int b1, b2, b3;//�ڶ���������λ��
    int c1, c2, c3;//������������λ��
    int d1, d2, d3;//������
    int n;//�ܸ���
    n = 0;
    for (a1 = 1; a1 <= 5; a1++) {//��֪��������ƽ����Ϊ���ٶ࣬���Ե�һ�����϶�С��600���ڶ��������ڵ���600�������ܵ�900
        for (a2 = 1; a2 <= 9; a2++) {//��С�������a2
            if (a2 != a1) {
                for (a3 = 1; a3 <= 9; a3++) {//����a3
                    if (a3 != a1 && a3 != a2) {
                        d1 = a1 * 100 + a2 * 10 + a3;
                        for (b1 = 6; b1 <= 8; b1++) {
                            if (a2 == b1 || a3 == b1)//�ظ��Ļ��ı�b1��ֵ
                                continue;
                            for (b2 = 1; b2 <= 9; b2++) {//����b2
                                if (b2 != a1 && b2 != a2 && b2 != a3 && b2 != b1) {
                                    for (b3 = 1; b3 <= 9; b3++) {//����b3
                                        if (b3 != a1 && b3 != a2 && b3 != a3 && b3 != b1 && b3 != b2) {
                                            d2 = b1 * 100 + b2 * 10 + b3;
                                            for (c1 = 7; c1 <= 9; c1++) {
                                                if (c1 == a2 || c1 == a3 || c1 == b1 || c1 == b2 || c1 == b3)//��ǰ������ظ�
                                                    continue;
                                                for (c2 = 1; c2 <= 9; c2++) {
                                                    if (c2 != a1 && c2 != a2 && c2 != a3 && c2 != b1 && c2 != b2 && c2 != b3 && c2 != c1) {
                                                        for (c3 = 1; c3 <= 9; c3++) {
                                                            if (c3 != a1 && c3 != a2 && c3 != a3 && c3 != b1 && c3 != b2 && c3 != b3 && c3 != c1 && c3 != c2) {
                                                                d3 = c1 * 100 + c2 * 10 + c3;
                                                                if (d1 + d2 + d3 == 1953) {
                                                                    n = n + 1;
                                                                    cout << setw(4) << "No." <<n<<" : " << d1 << " " << d2 << " " << d3 << endl;
                                                                }
                                                                else {
                                                                    continue;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

	/* �˴�����ĳ������ */

	QueryPerformanceCounter(&end);		//�����ֹӲ������������

	cout << "������Ƶ�� : " << tick.QuadPart << "Hz" << endl;
	cout << "���������� : " << end.QuadPart - begin.QuadPart << endl;
	cout << setiosflags(ios::fixed) << setprecision(6) << double(end.QuadPart - begin.QuadPart) / tick.QuadPart << "��" << endl;

	return 0;
}