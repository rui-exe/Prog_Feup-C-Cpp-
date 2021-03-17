#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool readInt(int &x)
{
    cin >> x;

    if ((cin.good() && (cin.peek()) == '\n')) {
        cin.clear();
        cin.ignore(10000, '\n');
        return true;
    } else {
        cin.clear();
        cin.ignore(10000, '\n');
        return false;
    }
}
int main()
{
    int x;
    cout <<"Enter number x:";
    bool y = readInt(x);
    if (y)
    {
        cout <<"Valid input!";
    } else
    {
        cout <<"Invalid input!";
    }
    return 0;
}
