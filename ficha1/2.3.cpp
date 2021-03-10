#include <iostream>
using namespace std;
int main() {
    double num1,num2,sum;
    cout<<"Int 1:";
    cin>>num1;
    cout<<"Int 2:";
    cin>>num2;
    sum = num1 + num2;
    if (sum>INT_MAX || (num1 > INT_MAX) || (num2 > INT_MAX))
    {
        cout<<"Sum Overflow"<<endl;
    }
    else if (sum<INT_MIN || (num1 < INT_MIN) || (num2 < INT_MIN))
    {
        cout<<"Sum Underflow"<<endl;
    }
    else
    {
        cout<<"Sum = "<<sum<<endl;
    }
    return 0;
}
