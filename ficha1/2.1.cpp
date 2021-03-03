#include <iostream>
using namespace std;
int main() {
    double a,b,c,d,e,f;
    cout << "A? ";cin>>a;
    cout << "B? ";cin>>b;
    cout << "C? ";cin>>c;
    cout << "D? ";cin>>d;
    cout << "E? ";cin>>e;
    cout << "F? ";cin>>f;
    if ((a*e - b*d) == 0) {
        cout << "The system is impossible to solve.";
    }
    else {
        double x = (c*e - b*f) / (a*e - b*d);
        double y = (a*f - c*d) / (a*e - b*d);
        cout << "x = "<< x<<" y = "<< y;
    }
    return 0;
}
