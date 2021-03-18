#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool is_leap_year(unsigned year)
{
    return((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0 && year % 100==0));
}

int days_of_month(unsigned year, unsigned month)
{
    int num_days;
    switch(month)
    {
        case 4: case 6: case 9: case 11:
            num_days= 30;break;
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            num_days= 31;break;
        case 2:
            if (is_leap_year(year)){
                num_days=  29;break;
            }
            else{
                num_days= 28;break;
            }
        default:
            num_days= 0;break;
    }
    return num_days;
}
int main()
{
    unsigned year,month;
    cout<<"Year:";
    cin>>year;
    cout<<"Month:";
    cin>>month;
    cout<<"The month "<< month<<" in the year "<<year<<" has "<< days_of_month(year,month)<<" days"<<endl;
    return 0;
}
