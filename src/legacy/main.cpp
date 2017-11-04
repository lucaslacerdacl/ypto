#include "./Ypto.h"
#include <iostream>
using namespace std;

int main() {
    Ypto x1;
    Ypto x2(5,6,7);
    x1.setA(1);
    x1.setB(2);
    cout << x1.soma();
    cout << x2.soma();
    x1.setC(x2.getA());
    x2.setA(x2.getA() + 1);
    cout << x1.getC();
    cout << x2.getA();
}