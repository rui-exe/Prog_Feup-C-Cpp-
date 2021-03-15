#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int gcd(int num1, int num2)
{
    while(true)
    {
        if (num1 == num2) return num1;
        if (num1 == 0) return num2;
        if (num2 == 0) return num1;

        if (num1>num2) num1 -= num2;
        else num2 -= num1;
    }
}

int main()
{
    int num1,num2;
    cout<<"Enter the 2 numbers to see their greatest common divisor."<<endl;
    cout<<"Number 1: ";
    cin>>num1;
    cout<<"Number 2: ";
    cin>>num2;
    cout << "Their greatest common divisor is "<< gcd(num1,num2)<<endl;
    return 0;
}

