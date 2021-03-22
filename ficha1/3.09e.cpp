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

void monthInterpreter(int month, string &result) {
    if (month == 1) {
        result = "January";
    }
    else if (month == 2) {
        result = "February";
    }
    else if (month == 3) {
        result = "March";
    }
    else if (month == 4) {
        result = "April";
    }
    else if (month == 5) {
        result = "May";
    }
    else if (month == 6) {
        result = "June";
    }
    else if (month == 7) {
        result = "July";
    }
    else if (month == 8) {
        result = "August";
    }
    else if (month == 9) {
        result = "September";
    }
    else if (month == 10) {
        result = "October";
    }
    else if (month == 11) {
        result = "November";
    }
    else {
        result = "December";
    }

}

string weekDay(int &ds){
    if (ds == 0) {
        return "Saturday"; //0 should be interpreted as Saturday
    }
    else if (ds == 1) {
        return "Sunday"; //1 should be interpreted as Sunday
    }
    else if (ds == 2) {
        return "Monday"; //2 should be interpreted as Monday
    }
    else if (ds == 3) {
        return "Tuesday"; //3 should be interpreted as Tuesday
    }
    else if (ds == 4) {
        return "Wednesday"; //4 should be interpreted as Wednesday
    }
    else if (ds == 5) {
        return "Thursday"; //5 should be interpreted as Thursday
    }
    else if (ds == 6) {
        return "Friday"; //6 should be interpreted as Friday
    }
}

int main()
{
    int year,month=1;
    cout<<"Year:";
    cin>>year;
    string result;
    while(month<=12){
        int days = days_of_month(year, month);
        monthInterpreter(month, result);
        cout << '\n';
        cout << result << " " << year << endl;
        cout << setw(5) << "Sun" << setw(5) << "Mon" << setw(5) << "Tue" << setw(5) << "Wed" << setw(5) << "Thu" << setw(5) << "Fri" << setw(5) << "Sat" << endl;

        for (int i = 1; i <= days; i++) {
            int ds = day_of_the_week(year, month, i);
            if (i == 1) {
                if (weekDay(ds) == "Saturday") {
                    cout << setw(35) << i << endl;
                }
                else if (weekDay(ds) == "Friday") {
                    cout << setw(30) << i;
                }
                else if (weekDay(ds) == "Thursday") {
                    cout << setw(25) << i;
                }
                else if (weekDay(ds) == "Wednesday") {
                    cout << setw(20) << i;
                }
                else if (weekDay(ds) == "Tuesday") {
                    cout << setw(15) << i;
                }
                else if (weekDay(ds) == "Monday") {
                    cout << setw(10) << i;
                }
                else if (weekDay(ds) == "Sunday") {
                    cout << setw(5) << i;
                }
            } else {
                cout << setw(5);
                if (weekDay(ds) == "Sunday") {
                    cout << i << setw(5);
                }
                else if (weekDay(ds) == "Monday") {
                    cout << i << setw(5);
                }
                else if (weekDay(ds) == "Tuesday") {
                    cout << i << setw(5);
                }
                else if (weekDay(ds) == "Wednesday") {
                    cout << i << setw(5);
                }
                else if (weekDay(ds) == "Thursday") {
                    cout << i << setw(5);
                }
                else if (weekDay(ds) == "Friday") {
                    cout << i << setw(5);
                }
                else if (weekDay(ds) == "Saturday") {
                    cout << i << setw(5) << endl;
                }
            }
        }

        cout << '\n';
        month++;
    }
    return 0;
}