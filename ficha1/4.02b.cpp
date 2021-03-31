#include <iostream>
#include <vector>

using namespace std;

void readVector(vector<int> &v){
    int i=0;
    while (!cin.eof()){
        cout<<"v["<<i<<"]= ";
        cin>>v[i];
        i++;
    }
}

size_t findValueInVector(const vector<int> &v, int value, size_t pos1, size_t pos2){
    for (int i=pos1;i<=pos2;i++){
        if (v[i]==value){
            return i;
        }
    }
    return -1;
}

void findMultValuesInVector(const vector<int> &v, int value, size_t pos1, size_t pos2, vector<size_t> &index){
    for (int i = pos1; i <= pos2; i++) {
        if (v[i] == value)
            index.push_back(i);
    }
}

int main(){
    int nElem;
    vector<int> v;
    vector<size_t> idx;
    readVector(v);

    int pos1, pos2, value;
    cout << "Enter the lower bound: " << endl;
    cin >> pos1;
    cout << "Enter the upper bound: " << endl;
    cin >> pos2;
    cout << "Enter the value you are looking for: " << endl;
    cin >> value;

    if (findValueInVector(v, value, pos1, pos2) == 1) {
        cout << "The value was found at the index " << findValueInVector(v, value, pos1, pos2) << endl;
    }
    else {
        cout << "It was not possible to find the value"<<endl;
    }

    findMultValuesInVector(v, value, pos1, pos2, idx);
    cout << "The value was found a total of " << idx.size() << " times."<< endl;

    return 0;
}