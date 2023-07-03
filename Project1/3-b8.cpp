/*2251311 信12 孙华宏 */
#include <iostream>
#include <conio.h>
#include <iomanip>   
#include <cmath>      
using namespace std;

int main()
{
    int x,n;
    double h,sum;
    bool i;
    i = 1;
    while(i=1) {
        cout << "请输入 x 的值[-10 ~ +65]" << endl;
        cin >> x ;
        if (x < -10 || x>65) {
            cout << "输入非法，请重新输入" << endl;
            continue;
        }
        else
            break;
    }
    n = 1;
    h = x / n;
    for (sum = 1; fabs(h) >= 1e-6; n++) {
        sum = sum + h * x / n;
        h = h * x / n;
   }
    cout << "e^" << x << "=" << setprecision(10)<< sum << endl;
    return 0;
}