#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double n,q,j;
    cout<<"How much years?Amount?Interest rate?";
    cin>>n>>q>>j;
    double amount = q;
    for (int i = 0;i<n; i++)
    {
        amount = amount + amount*(j/100);
    }
    cout<<"After "<<n<<" years at an interest rate of "<< j<<"% you can withdraw "<<amount<<"$"<<endl;
    return 0;
}
