#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double round(double x, unsigned n)
{
    int multiplier = pow(10,n);
    return floor(x * multiplier + 0.5) / multiplier;
}

int main()
{
    double number;
    unsigned places;
    cout << "Enter a number to see it rounded: ";
    cin >> number;
    cout << "How many decimal places?";
    cin >> places;
    cout << "The number " << number << " rounded to " << places << " decimal places is " << round(number, places);
    return 0;
}
 
