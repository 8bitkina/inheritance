//
// Created by Кристина Биткина on 16.07.2020.
//

#ifndef inheritance_TRIANGLE_H
#define inheritance_TRIANGLE_H


#include "Figure.h"

class Triangle : public Figure {
protected:
    double a, b, c;
public:
    Triangle(double _a, double _b, double _c);
    void Print();
    double angles(int num);
    double perimeter();
    double area();
};


#endif //inheritance_TRIANGLE_H
