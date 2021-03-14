#include <iostream>
using namespace std;
int main() {
    int max,medium,min,x;
    for (int i=1;i<=3;i++ ) {
        cout << "Pls input a number: ";
        cin >> x;
        if (i == 1) {
            max = x;
            min = x;
        } if (x < min) {
            medium = min;
            min = x;
        } else if (x > max) {
            medium = max;
            max = x;
        }else{
            medium = x;
        }

    }
    cout <<"Max= "<< max<<endl;
    cout <<"Medium= "<< medium<<endl;
    cout <<"Min= "<< min<<endl;
}
