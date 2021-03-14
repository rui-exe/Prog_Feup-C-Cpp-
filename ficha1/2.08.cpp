#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    const double PI=4 * atan(1);
    double radian;
    cout<<"Angle\tSin\tCos\tTan"<<endl;
    cout << fixed << setprecision(6);
    for (int i = 0;i<=90; i+=15)
    {
        radian = static_cast<double>(i)/180 * PI;
        if (i == 90) {
            cout << i << "\t" << sin(radian) << "\t" << cos(radian) << "\t" << "infinite" << endl;
        } else {
            cout << i << "\t" << sin(radian) << "\t" << cos(radian) << "\t" << tan(radian) << endl;
        }
    }
    return 0;
}
