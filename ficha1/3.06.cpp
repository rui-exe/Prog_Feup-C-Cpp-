#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

time_t time_elapsed()
{
    double chrono = time(NULL);
    return chrono;
}

int main()
{
    char key1,stopper;
    double start,end;
    cout<<"Are you ready to start the clock? "
          "Press any key and hit enter to start..."<<endl;
    cin>>key1;
    start = time_elapsed();
    cout<<"Hit any key to stop and see how much time has passed: ";
    cin>>stopper;
    end = time_elapsed();
    cout<<"It has passed "<<end-start<<" seconds since the clock started";
    return 0;
}
