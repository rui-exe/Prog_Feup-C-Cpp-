#include <iostream>

using namespace std;
int gcd (int num1, int num2){
    if (num1 % num2 == 0) {
        return num2;
    }
    else {
        return gcd(num2, num1 % num2);
    }
}

int main(){
    int num1,num2;
    cout<<"Number1:";
    cin>>num1;
    cout<<"Number2:";
    cin>>num2;
    cout<<"The gcd between number "<< num1 <<" and number "<<num2<<" is "<<gcd(num1,num2)<<endl;
    return 0;
}