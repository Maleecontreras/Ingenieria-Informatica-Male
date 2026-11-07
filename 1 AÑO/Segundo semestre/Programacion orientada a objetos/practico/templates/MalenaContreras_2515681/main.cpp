#include "clases.h"
int main() {
    terna<int, int, int> t1;
    t1.establecer(2);
    t1.establecer2(3);
    t1.establecer3(4);
    t1.mostrar();

    cout << endl;

    terna<float, float, float> t2(1.5, 2.5, 3.5);
    t2.mostrar();
}
