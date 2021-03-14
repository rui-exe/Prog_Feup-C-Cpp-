#include <iostream>
using namespace std;
int main() {
    double weight,cost;
    cout <<"What's the weight of the merchandise:";
    cin >> weight;
    double aux = weight;
    if (weight<= 500)
    {
        cost= 5;
    }
    else if (weight> 500 && weight<=1000){
        cost = 5 ;
        aux -= 500;
        while (aux>0)
        {
            cost += 1.5;
            aux -= 100;
        }
    }
    else {
        cost = 12.5;
        aux -= 1000;
        while (aux > 0)
        {
            cost += 5;
            aux -= 250;
        }
    }
    cout<<"The cost of transporting "<<weight<<" grams of merchandise is equal to "<<cost<<"$"<<endl;
    return 0;
    
}
