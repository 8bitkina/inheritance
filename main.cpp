#include <iostream>
#include<algorithm>
#include "Prism.h"
#include <vector>
#include <fstream>
using namespace std;

void Input(vector<Figure *> &v) {
    ifstream in("input.txt");
    int kod;
    double a, b, c, h;
    while (!in.eof()) {
        try {
            in >> kod;
            if (kod == 1) {
                in >> a >> b >> c;
                if (a < 0 || b < 0 || c < 0) throw "Error input data, negative. ";
                if (a+b <= c || a+c <= b || b+c <= a) throw "Error input data, does not exist. ";
                Triangle *t1 = new Triangle(a, b, c);
                v.push_back(t1);
            }
            else
            if (kod == 2) {
                in >> a >> b >> c >> h;
                if (a < 0 || b < 0 || c < 0 || h <= 0) throw "Error input data, negative. ";
                if (a+b <= c || a+c <= b || b+c <= a) throw "Error input data, does not exist. ";
                Prism* t2 = new Prism(a, b, c, h);
                v.push_back(t2);
            }
        }
        catch (const char* er) {
            cout << er;
        }
    }
    in.close();
}

void Print2(vector<Figure*> v) {
    for (auto & i : v) {
        i->Print();
        cout << endl;
    }
    cout << endl;
}

void Func_3(vector<Figure *>& v) {
    double max_tr = -1, max_pr = -1;
    int pos_tr = -1, pos_pr = -1;
    for (int i = 0; i < v.size(); i++) {
        Prism *tmp1 = dynamic_cast<Prism*>(v[i]);
        if (tmp1) {
            if (tmp1->max_d() > max_pr) {
                max_pr = tmp1->max_d();
                pos_pr = i;
            }
        }
        else {
            Triangle *tmp2 = dynamic_cast<Triangle*>(v[i]);
            if (tmp2->area() > max_tr) {
                max_tr = tmp2->area();
                pos_tr = i;
            }
        }
    }

    v[pos_tr]->Print();
    cout << endl;

    v[pos_pr]->Print();
    cout << "(диагональ = " << max_pr << ")";
    cout << endl;
}

int main() {
    vector<Figure*> Vector;
    Input(Vector);
    cout << "Фигуры: " << endl;
    Print2(Vector);
    cout << "Tреугольник с максимальной площадью и призмa с максимальной диагональю: " << endl;
    Func_3(Vector);
    return 0;
}