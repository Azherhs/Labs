#include "Complex.h"
using namespace std;
int main() {
    ifstream f;
    f.open("one.txt");
    int k=0;
    f >> k;
    Complex* mass = new Complex[k];
    for (int i = 0; i < k; i++) {
        f >> mass[i].re;
        f >> mass[i].im;
    }
    f.close();
    int a = 0;
    float b = abs(mass[0]);
    for (int i = 0; i < k; i++) {
        if (b <= abs(mass[i])) {
            a = i;
            b = abs(mass[i]);
        }
    }
    cout << "Maximum: " << a << endl;
    delete[] mass;
    return 0;
}

