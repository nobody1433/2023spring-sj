/* 信12 2251311 孙华宏*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <windows.h> //取系统时间
using namespace std;

int main()
{
	LARGE_INTEGER tick, begin, end;

	QueryPerformanceFrequency(&tick);	//获得计数器频率
	QueryPerformanceCounter(&begin);	//获得初始硬件计数器计数

	/* 此处是你的程序开始 */
    int a1, a2, a3;//第一个数各个位置
    int b1, b2, b3;//第二个数各个位置
    int c1, c2, c3;//第三个数各个位置
    int d1, d2, d3;//三个数
    int n;//总个数
    n = 0;
    for (a1 = 1; a1 <= 5; a1++) {//易知三个数的平均数为六百多，所以第一个数肯定小于600，第二个数大于等于600，但不能到900
        for (a2 = 1; a2 <= 9; a2++) {//从小到大遍历a2
            if (a2 != a1) {
                for (a3 = 1; a3 <= 9; a3++) {//遍历a3
                    if (a3 != a1 && a3 != a2) {
                        d1 = a1 * 100 + a2 * 10 + a3;
                        for (b1 = 6; b1 <= 8; b1++) {
                            if (a2 == b1 || a3 == b1)//重复的话改变b1的值
                                continue;
                            for (b2 = 1; b2 <= 9; b2++) {//遍历b2
                                if (b2 != a1 && b2 != a2 && b2 != a3 && b2 != b1) {
                                    for (b3 = 1; b3 <= 9; b3++) {//遍历b3
                                        if (b3 != a1 && b3 != a2 && b3 != a3 && b3 != b1 && b3 != b2) {
                                            d2 = b1 * 100 + b2 * 10 + b3;
                                            for (c1 = 7; c1 <= 9; c1++) {
                                                if (c1 == a2 || c1 == a3 || c1 == b1 || c1 == b2 || c1 == b3)//与前面的数重复
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

	/* 此处是你的程序结束 */

	QueryPerformanceCounter(&end);		//获得终止硬件计数器计数

	cout << "计数器频率 : " << tick.QuadPart << "Hz" << endl;
	cout << "计数器计数 : " << end.QuadPart - begin.QuadPart << endl;
	cout << setiosflags(ios::fixed) << setprecision(6) << double(end.QuadPart - begin.QuadPart) / tick.QuadPart << "秒" << endl;

	return 0;
}