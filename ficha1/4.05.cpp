#include <iostream>
#include <vector>

using namespace std;

bool is_in(int value, vector<int> z){
    for (int i = 0;i<z.size();i++){
        if (value==z[i]){
            return true;
        }
    }
    return false;
}

void removeDuplicates(vector<int> &v){
    vector<int> aux;
    aux.push_back(v[0]);
    for(int i=0;i<v.size();i++){
        if (!is_in(v[i], aux)) {
            aux.push_back(v[i]);
        }
    }
    v=aux;
}

int main() {
    vector <int> v = {1,4,2,1,4,2,3,5,6,6,7,5};
    removeDuplicates(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}