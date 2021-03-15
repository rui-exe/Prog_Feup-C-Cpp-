#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x1,y1,x2,y2,x3,y3,a,b,c,s,area;
    cout<<"Vertice1:\n x1: ";cin >> x1;cout <<"y1: ";cin >> y1;
    cout<<"Vertice2:\n x2: ";cin >> x2;cout <<"y2: ";cin >> y2;
    cout<<"Vertice3:\n x3: ";cin >> x3;cout <<"y3: ";cin >> y3;
    a = sqrt((pow((x2-x1),2))+ (pow((y2-y1),2)));
    b = sqrt((pow((x3-x1),2))+ (pow((y3-y1),2)));
    c = sqrt((pow((x3-x2),2))+ (pow((y3-y2),2)));
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"A area do triangulo e exatamente: "<<area<<" unidades de area";
    return 0;
}
 
