#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int num)
{
    int root;
    bool prime = true;
    for (int i=2;i <= (int)sqrt(num);i++)
    {
        if (num%i == 0)
        {
            prime = false;
            break;
        }
    }
    return prime;
}
int main()
{
int number,divisor = 2;
cout<<"Enter a number to see it factorized:";
cin>>number;
cout<<"Here's the number factorized:"<<endl;
while (true)
{
    if (is_prime(number))
    {
        cout << number;
        break;
    }
    else if (is_prime(divisor) && number%divisor==0)
    {
        cout<<divisor<<"x";
        number = number/divisor ;
    }
    else
        { 
        divisor++;
    }
}
return 0;
}

