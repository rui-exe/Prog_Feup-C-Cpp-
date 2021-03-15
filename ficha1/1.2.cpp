#include <iostream>

using namespace std;

int main() { 
    int a,b,c;
    cout <<"Please, input 3 integer numbers: \n";
    cout << "A: ";
    cin >> a;
    cout<<"B: ";
    cin >> b;
    cout<<"C: ";
    cin >> c;
    double mean;
    mean = (double(a+b+c))/3;
    cout << "Mean = "<<mean<<endl;
    cout << "A-mean = " << a - mean << endl;
    cout<<"B-mean = " << b-mean << endl;
    cout<<"C-mean = " << c-mean << endl;
    return 0;
}
