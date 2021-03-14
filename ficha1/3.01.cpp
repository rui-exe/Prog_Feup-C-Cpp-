#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
}

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double s;
    double a = distance(x1,y1,x2,y2);
    double b = distance(x1,y1,x3,y3);
    double c = distance(x2,y2,x3,y3);
    s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}


int main() {
    double x1,y1,x2,y2,x3,y3;
    cout<<"Vertice1:\n x1: ";cin >> x1;cout <<"y1: ";cin >> y1;
    cout<<"Vertice2:\n x2: ";cin >> x2;cout <<"y2: ";cin >> y2;
    cout<<"Vertice3:\n x3: ";cin >> x3;cout <<"y3: ";cin >> y3;
    cout<<"A area do triangulo e exatamente: "<<area(x1,y1,x2,y2,x3,y3)<<" unidades de area";
    return 0;
}
