#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num,root;
    cout <<"Num1: ";
    cin >> num;
    bool is_prime = true;
    for (int i=2;i <= (int)sqrt(num);i++)
        {
            if (num%i == 0)
            {
                is_prime = false;
                break;
            }
        }
    if (is_prime)
        {
            cout<<"the number "<<num<<" is prime!"<<endl;
        }
    else
        {
            cout<<"the number "<<num<<" is not prime!"<<endl;
        }
    }

