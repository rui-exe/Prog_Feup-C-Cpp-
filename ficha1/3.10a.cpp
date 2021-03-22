#include <iostream>

using namespace std;
unsigned long long factorial_ite(unsigned int n){
    unsigned long long result=1;
    for (int i=2;i<=n;i++){
        result*=i;
    }
    return result;
}

int main(){
    unsigned int num;
    cout<<"Number:";
    cin>>num;
    cout<<num<<"! = "<<factorial_ite(num)<<endl;
    return 0;
}