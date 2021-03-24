#include <iostream>

using namespace std;
void readArray(int a[], size_t nElem){
    for (int i=1;i<=nElem;i++){
        cout<<"a["<<i<<"] =  ";
        cin>>a[i];
    }
}
size_t findMultValuesInArray(const int a[],size_t nElem, int value, size_t pos1, size_t pos2, size_t index[]){
    int number_of_occurrences=0;
    for (int i=pos1;i<=pos2;i++){
        if (a[i]==value){
            index[number_of_occurrences]=value;
            number_of_occurrences++;
        }
    }
    return number_of_occurrences;
}
int main(){
    size_t num_elements, pos1, pos2;
    int value;
    cout<<"Select the number of elements of the array:";
    cin>> num_elements;
    int a[4000];
    size_t index[1000];
    readArray(a,num_elements);
    cout<<"What value are u looking for: ";
    cin>>value;
    cout<<"Limit 1:";
    cin>> pos1;
    cout<<"Limit 2:";
    cin>> pos2;
    int times = findMultValuesInArray(a,  num_elements, value,  pos1, pos2,index);
    cout<<"Your value occurred "<< times<<" in the array between your boundaries."<<endl;
    return 0;
}