#include <iostream>

using namespace std;
void readArray(int a[], size_t nElem){
for (int i=1;i<=nElem;i++){
    cout<<"a["<<i<<"] =  ";
    cin>>a[i];
}
}

int main(){
    size_t num_elements;
    cout<<"Select the number of elements of the array:";
    cin>> num_elements;
    int a[4000];
    readArray(a,num_elements);
    return 0;
}