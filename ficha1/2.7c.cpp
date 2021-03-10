#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num_primes = 0,n=2;
    while (num_primes<100)
    {
        bool is_prime = true;
        for (int i = 2; i <= (int) sqrt(n); i++)
        {
            if (n % i == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            num_primes +=1;
            cout << "the number " << n << " is prime!" << endl;
        }
        n = n +1;
    }
    return 0;
    }

