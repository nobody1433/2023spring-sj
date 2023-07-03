/*2251311 信12 孙华宏 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double m;
	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10,k;
	cout << "请输入找零值：\n";
	cin >> m;
	k = 0;
	a1 = int(m / 50.0);
	k = k + a1;

	a2 = int((m - 50.0 * a1) / 20.0);
	k = k + a2;

	a3 = int((m - 50.0 * a1 - 20.0 * a2)) / 10;
	k = k + a3;

	a4 = int((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3)) / 5;
	k = k + a4;

	a5 = int((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3 - 5.0 * a4)) / 1;
	k = k + a5;

	a6 = int((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3 - 5.0 * a4 - 1.0 * a5) * 100) / 50;
	k = k + a6;

	a7 = int((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3 - 5.0 * a4 - 1.0 * a5) * 100 - a6 * 50.0) / 10;
	k = k + a7;

	a8 = int((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3 - 5.0 * a4 - 1.0 * a5) * 100 - a6 * 50.0 - a7 * 10) / 5;
	k=k+a8;

	a9= int((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3 - 5.0 * a4 - 1.0 * a5) * 100 - a6 * 50.0 - a7 * 10-a8*5) / 2;
	k = k + a9;

	a10= int((m - 50.0 * a1 - 20.0 * a2 - 10.0 * a3 - 5.0 * a4 - 1.0 * a5) * 100 - a6 * 50.0 - a7 * 10 - a8 * 5-a9*2) / 1;
	k = k + a9;

	cout << "共" << k << "张找零，具体如下："<<endl;
	if (a1 > 0)
		cout << setiosflags(ios::left) << setw(5) << "50元" << " : " << a1 << "张" << endl;
	if (a2 > 0)
		cout << setiosflags(ios::left) << setw(5) << "20元" << " : " << a2 << "张" << endl;
	if (a3 > 0)
		cout << setiosflags(ios::left) << setw(5) << "10元" << " : " << a3 << "张" << endl;
	if (a4 > 0)
		cout << setiosflags(ios::left) << setw(5) << "5元" << " : " << a4 << "张" << endl;
	if (a5 > 0)
		cout << setiosflags(ios::left) << setw(5) << "1元" << " : " << a5 << "张" << endl;
	if (a6 > 0)
		cout << setiosflags(ios::left) << setw(5) << "5角" << " : " << a6 << "张" << endl;
	if (a7 > 0)
		cout << setiosflags(ios::left) << setw(5) << "1角" << " : " << a7 << "张" << endl;
	if (a8 > 0)
		cout << setiosflags(ios::left) << setw(5) << "5分" << " : " << a8 << "张" << endl;
	if (a9 > 0)
		cout << setiosflags(ios::left) << setw(5) << "2分" << " : " << a9 << "张" << endl;
	if (a10 > 0)
		cout << setiosflags(ios::left) << setw(5) << "1分" << " : " << a10 << "张" << endl;

}