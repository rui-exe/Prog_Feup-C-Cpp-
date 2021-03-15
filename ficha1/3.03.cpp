#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void square_root(float value,int precision,unsigned iterations )
{
    float rqn, rq = 1;

    for (int i = 1;i<=iterations;i++)
    {
        rqn = (rq + value / rq) / 2;
        rq = rqn;
    }
    cout<<setprecision(precision)<<"The square root of "<< value << " is: "<<rqn<<endl;
}

int main()
{
    float number;
    int precision,iterations;
    cout<<"Enter a number to see it's square root approximation using the Heron of Alexandria algorithm:";
    cin>>number;
    cout<<"How many iterations do you want this algorithm to use? ";
    cin>>iterations;
    cout<<"What's the precision of the decimal point?";
    cin>>precision;
    square_root(number,precision,iterations);
    return 0;
}
