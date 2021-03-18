#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
bool is_leap_year(unsigned long  year)
{
    return((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0 && year % 100==0));
}

int main()
{
return 0;
}
