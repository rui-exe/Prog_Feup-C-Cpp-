#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool is_leap_year(unsigned year)
{
    return((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0 && year % 100==0));
}

int day_of_the_week(int year, int month, int day) {
    int last_two = (year % 100), first_two, temp = year, c;
    while (true) {
        if (temp < 100) {
            first_two = temp;
            break;
        }
        temp /= 10;
    }
    if (is_leap_year(year)) {
        switch (month){
            case 1: case 4: case 7: c = 6; break;
            case 2: case 8: c = 2;break;
            case 3: case 11: c = 3;break;
            case 5: c = 1;break;
            case 6: c = 4;break;
            case 9: case 12: c = 5;break;
            case 10: c = 0;break;
            default: c = 99999;
        }
    }
    else {
        switch (month){
            case 1: case 10:  c = 0; break;
            case 2: case 3: case 11: c = 3;break;
            case 4: case 7: c = 6;break;
            case 5: c = 1;break;
            case 6: c = 4;break;
            case 8: c = 2;break;
            case 9: case 12: c = 5;break;
            default: c = 99999;
        }
    }
    if (c == 99999){
        cout<<"Enter a correct month please"<<endl;
        return 9999;
    }
    return ((5*last_two)/4 + c + day - 2*(first_two%4)+7)%7;
}

int main()
{
    int year,month,day,d;
    string day_of_week;
    cout<<"Year:";
    cin>>year;
    cout<<"Month:";
    cin>>month;
    cout<<"Day:";
    cin>>day;
    d = day_of_the_week(year, month, day);
    switch (d){
        case 0: day_of_week = "Saturday";break;
        case 1: day_of_week = "Sunday";break;
        case 2: day_of_week = "Monday";break;
        case 3: day_of_week = "Tuesday";break;
        case 4: day_of_week = "Wednesday";break;
        case 5: day_of_week = "Thursday";break;
        case 6: day_of_week = "Friday";break;
        default: cerr<<"Something went wrong"<<endl;
            return -1;
    }
    cout<<day<<"/"<<month<<"/"<<year<<" is a "<< day_of_week<<endl;
    return 0;
}