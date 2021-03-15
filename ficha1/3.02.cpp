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
unsigned number;
cout<<"Enter a positive number to check if it's prime or not:";
cin>>number;
if (is_prime(number)) cout<<"The number "<<number<<" is prime!"<<endl;
else cout <<"The number "<<number<<" is not prime!";
return 0;
}
