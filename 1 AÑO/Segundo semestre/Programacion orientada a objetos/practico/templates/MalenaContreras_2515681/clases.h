#include <iostream>
using namespace std;

template<class dato, class dato2, class dato3>
class terna {
private:
    dato valor;
    dato2 valor2;
    dato3 valor3;
public:
    terna();
    terna(dato, dato2, dato3);
    void establecer(dato);
    dato obtener();
    void establecer2(dato2);
    dato2 obtener2();
    void establecer3(dato3);
    dato3 obtener3();
    int sumar();
    int multi();
    void mostrar();
};
