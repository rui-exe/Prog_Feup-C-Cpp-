#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &v){
int n = v.size(), temp;
for (int i = 0;i < n;i++){
    for (int j= i + 1;j < n;j++){
        if (v[i]>v[j]){
            temp = v[i]; v[i] = v[j]; v[j] = temp;
        }
    }
}
}
int main(){
    vector<int> a = {3,2,1,0};
    bubbleSort(a);
    for(int i = 0;i < a.size();i++){
        cout<<a[i]<<endl;
    }
    return 0;
}