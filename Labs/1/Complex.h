#ifndef UNTITLED27_COMPLEX_H
#define UNTITLED27_COMPLEX_H
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
class Complex {
public:
    double re;
    double im;
};
Complex sum(Complex b, Complex c);
Complex raz(Complex b, Complex c);
Complex umn(Complex b, Complex c);
Complex del(Complex b, Complex c);
double abs(Complex a);
#endif //UNTITLED27_COMPLEX_H
