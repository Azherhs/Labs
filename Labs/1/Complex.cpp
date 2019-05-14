#include "Complex.h"
Complex sum(Complex a, Complex b){
    Complex res;
    res.re = a.re+b.re;
    res.im = a.im + b.im;
    return res;
}
Complex raz(Complex a, Complex b) {
    Complex res;
    res.re = a.re - b.re;
    res.im = a.im - b.im;
    return res;
}
Complex umn(Complex a, Complex b) {
    Complex res;
    res.re = a.re*b.re - a.im*b.im;
    res.im = a.re * b.im + b.re * a.im;
    return res;
}
Complex del(Complex a, Complex b) {
    Complex res;
    res.re = (a.re * b.re + a.im * b.im) / b.re*b.re + b.im*b.im;
    res.im = (b.re * a.im - a.re * b.im) / (b.re*b.re + b.im*b.im);
    return res;
}
double abs(Complex a) {
    return sqrt(a.re*a.re+a.im*a.im);
}