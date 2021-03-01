#include <iostream>
#include <cmath>
using namespace std;
float PI = M_PI;
int main(){
    float p, r, m;
    cout << "p? ";
    cin >> p;
    cout << "r?";
    cin >> r;
    cout << "The mass of the sphere with density "<< p<<" Kg/m^3 and radius of "<<r<<" m is "
    <<(float(4)/3)*p*PI*(pow(r,3))<<" Kg"<<endl;
    return 0;
}