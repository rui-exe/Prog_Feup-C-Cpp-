#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int> &v, int value){
    int first = 0;
    int last = v.size() - 1;
    int middle;

    while (first <= last){
        middle = (first + last)/2;
        if (v[middle] == value){
            return middle;
        } else if (value < v[middle]){
            last = middle - 1;
        } else {
            first = middle + 1;
        }
    }
    return -1;
}
int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9,10};
    int value = 7;
    cout<<"The value "<< value << " is in the index: "<< binarySearch(a,value)<<endl;
    return 0;
}