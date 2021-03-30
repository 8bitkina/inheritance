//
// Created by Кристина Биткина on 16.07.2020.
//

#ifndef inheritance_PRISM_H
#define inheritance_PRISM_H


#include "../inheritance/Triangle.h"

class Prism : public Triangle {
protected:
    double height;

public:
    Prism(double _a, double _b, double _c, double _h);
    void Print();
    double surface_area();
    double volume();
    double max_d();
};


#endif //inheritance_PRISM_H
