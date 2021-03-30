//
// Created by Кристина Биткина on 16.07.2020.
//

#include "Prism.h"
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
Prism::Prism(double _a, double _b, double _c, double _h): Triangle(_a, _b, _c), height(_h) {}

void Prism::Print(){
    cout << "Prism: " << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    cout << "B: " << c << endl;
    cout << "Height: " << height << endl;
    cout << "Square poverhnosty: " << surface_area() << endl;
    cout << "Volume: " << volume() << endl;

}

double Prism::surface_area() {
    return area()*2+height*perimeter();
}

double Prism::volume() {
    return area()*height;
}

double Prism::max_d() {
    return sqrt(max(a, max(b, c))+height*height);
}