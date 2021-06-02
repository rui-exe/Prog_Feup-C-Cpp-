#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

class Bet{
public:
    Bet();
    void show_bet();

private:
    vector <int> star_numbers;
    vector<int> numbers;
};
Bet::Bet(){
    for (int i=1; i<=50;i++){
        numbers.push_back(i);
        if (i<=12) star_numbers.push_back(i);
    }
    random_shuffle(star_numbers.begin(),star_numbers.end());
    random_shuffle(numbers.begin(),numbers.end());
    star_numbers.resize(2);
    numbers.resize(5);
}
void Bet::show_bet(){
    cout<<"Numbers:"<<endl;
    for (auto &n:numbers){
        cout<< n<<endl;
    }
    cout<<"Star numbers:"<<endl;
    for(auto &sn:star_numbers){
        cout<<sn<<endl;
    }
}
int main(){
    srand(time(nullptr));
    Bet my_bet;
    my_bet.show_bet();
    return 0;
}