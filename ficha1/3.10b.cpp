#include <iostream>

using namespace std;
unsigned long long factorial_rec(unsigned int n){
    if (n<=1){
        return 1;
    }
    else{
        return n * factorial_rec(n-1);
    }
}

int main(){
    unsigned int num;
    cout<<"Number:";
    cin>>num;
    cout<<num<<"! = "<<factorial_rec(num)<<endl;
    return 0;
} 
