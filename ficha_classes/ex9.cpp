#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
#include <set>

using namespace std;

bool rule(const string& a,const string& b){
    return a < b;
}

int main(){
    fstream file;
    file.open("../words.txt");
    string word;
    vector<string> words;
    while(getline(file,word)){
        words.push_back(word);
    }
    file.close();
    sort(words.begin(),words.end(),rule);
    set<string> my_set;
    for(auto &w: words){
        my_set.insert(w);
    }
    file.open("../words.txt");
    for(auto &w: my_set){
        file << w <<"\n";
    }
return 0;
}