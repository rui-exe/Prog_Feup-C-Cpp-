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
    if (max<=medium+min){
        cout << "It is not possible to create a triangle with the 3 lengths you inputted"<<endl;
    }
    else{
        cout << "It is possible to create a triagle with the 3 lenghts you inputed"<<endl;
    }
    return 0;
}
