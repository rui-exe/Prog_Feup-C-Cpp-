#include <iostream>
using namespace std;
int main() {
    /*Resolvi as alíneas todas no mesmo ficheiro de código para minimizar espaço */
    int a,b,c,max,min;
    cout << "A:"; cin >> a;
    cout << "B:"; cin >> b;
    cout << "C:"; cin >> c;
    if ((a >= b) && (a >= c)) {
        cout << "O maior numero e " << a << endl;
    } else if ((b >= c) && (b >= a)) {
        cout << "O maior numero e " << b << endl;
    } else if ((c >= a) && (c >= b)) {
        cout << "O maior numero e " << c << endl;
    }
    if ((a <= b) && (a <= c)) {
        cout << "O menor numero e " << a << endl;
    } else if ((b <= c) && (b <= a)) {
        cout << "O menor numero e" << b << endl;
    } else if ((c <= a) && (c <= b)) {
        cout << "O menor numero e " << c << endl;
    }
    return 0;
}
