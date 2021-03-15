#include <iostream>
using namespace std;
int main() {
    int hours1, min1, sec1, hours2, min2, sec2, hresult, mresult, sresult,days;
    cout <<"Time1 (hours:minutes:seconds)? ";cin>>hours1; cin>>min1;cin>>sec1;
    cout <<"Time2 (hours:minutes:seconds)? ";cin>>hours2; cin>>min2;cin>>sec2;
    days = (hours1+hours2)/24;
    hresult = ((hours1+hours2)%24) + ((min1+min2)/60);
    mresult = ((min1+min2)%60) + ((sec1+sec2)/60);
    sresult = (sec1+sec2)%60;
    cout <<"Time1 + Time2 = "<<days<<" day "<<hresult<<" hours "<<mresult<<" minutes and "<<sresult<<" seconds.";
    return 0;
}
 
