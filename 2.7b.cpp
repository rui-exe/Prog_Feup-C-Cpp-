#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num,root;
    for (int n=1;n<=1000;n++) {
        bool is_prime = true;
        for (int i = 2; i <= (int) sqrt(n); i++) {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (n == 0 || n == 1) {
            cout << "the number " << n << " is not a valid prime number!" << endl;
        } else if (is_prime) {
            cout << "the number " << n << " is prime!" << endl;
        } else {
            cout << "the number " << n << " is not prime!" << endl;
        }
    }
    }

