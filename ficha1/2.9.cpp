#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,i=1,reversed=0;
    cout<<"Enter a number:";
    cin >> num;
    int aux = num;
    while (aux!=0)
    {
        int digit=aux%10;
        reversed= reversed*10 + digit;
        aux = aux/10;
    }
    if (num==reversed)
    {
        cout<<"Congrats it is palindrome"<<endl;
    }
    else
    {
        cout<<"it is not sorry"<<endl;
    }
    return 0;
}

