#include "Complex.h"
using namespace std;
void vibor(){
    cout << "Kakuyu operatsiu hotite sdelat?"<< endl;
    cout << "1-plus"<< endl;
    cout << "2-minus"<< endl;
    cout << "3-umn"<< endl;
    cout << "4-del"<< endl;
};
int main()
{
    Complex res, a, b;
    int ans=3;
    vibor();
    if (ans>=1 && ans<=4){
        cin >> ans;
    }
    cout << "Vvedite deistvitelty i mnimuu chast 1 chisla: "<< endl;
    cin >> a.re >> a.im;
    cout << "Vvedite deistvitelty i mnimuu chast 2 chisla: " << endl;
    cin >> b.re >> b.im;
    switch (ans)
    {
        case 1:
            res = sum(a, b);
            break;
        case 2:
            res = raz(a, b);
            break;
        case 3:
            res = umn(a, b);
            break;
        case 4:
            res = del(a, b);
            break;
    }
    cout << "Resultat raven: " << '\t' << res.re << " + i" << res.im << endl;
    return 0;

}