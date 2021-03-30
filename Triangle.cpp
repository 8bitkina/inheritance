//
// Created by Кристина Биткина on 16.07.2020.
//

#include "Triangle.h"
#include "Figure.h"
#include <iostream>
#include <cmath>
using namespace std;

Triangle::Triangle(double _a, double _b, double _c): a(_a), b(_b), c(_c) {}

void Triangle::Print() {
    cout << "Triangle ABC: " << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "C: " << c << endl;
    cout << "Ugol 1 (a, b) = " << angles(1) << endl;
    cout << "Ugol 2 (b, c) = " << angles(2) << endl;
    cout << "Ugol 3 (c, a) = " << angles(3) << endl;
    cout << "Square: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
    cout << endl;
}

double Triangle::angles(int num) {
    if (num == 1) {
        return acos((a*a+b*b-c*c)/(2*a*b));
    }
    if (num == 2) {
        return acos((b*b+c*c-a*a)/(2*b*c));
    }
    if (num == 3) {
        return acos((a*a+c*c-b*b)/(2*a*c));
    }
    return -1;
}

double Triangle::perimeter() {
    return a+b+c;
}

double Triangle::area() {
    double p = perimeter()/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}