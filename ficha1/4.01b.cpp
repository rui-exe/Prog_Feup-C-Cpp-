#include <iostream>

using namespace std;
void readArray(int a[], size_t nElem){
    for (int i=1;i<=nElem;i++){
        cout<<"a["<<i<<"] =  ";
        cin>>a[i];
    }
}
int findValueInArray(const int a[], size_t nElem, int value, size_t pos1,size_t pos2){
    for (int i=pos1;i<=pos2;i++){
        if (a[i]==value){
            return i;
        }
    }
    return -1;
}
int main(){
    size_t num_elements, pos1, pos2;
    int value;
    cout<<"Select the number of elements of the array:";
    cin>> num_elements;
    int a[4000];
    readArray(a,num_elements);
    cout<<"What value are u looking for: ";
    cin>>value;
    cout<<"Limit 1:";
    cin>> pos1;
    cout<<"Limit 2:";
    cin>> pos2;
    cout<<"Your value is in the "<<findValueInArray(a,  num_elements, value,  pos1, pos2)<<" position of the array."<<endl;
    return 0;
}