#include "clases.h"
template<class dato, class dato2, class dato3>
terna<dato, dato2, dato3>::terna() {}

template<class dato, class dato2, class dato3>
terna<dato, dato2, dato3>::terna(dato _valor, dato2 _valor2, dato3 _valor3) {
    valor = _valor;
    valor2 = _valor2;
    valor3 = _valor3;
}

template<class dato, class dato2, class dato3>
void terna<dato, dato2, dato3>::establecer(dato _valor) {
    valor = _valor;
}

template<class dato, class dato2, class dato3>
dato terna<dato, dato2, dato3>::obtener() {
    return valor;
}

template<class dato, class dato2, class dato3>
void terna<dato, dato2, dato3>::establecer2(dato2 _valor2) {
    valor2 = _valor2;
}

template<class dato, class dato2, class dato3>
dato2 terna<dato, dato2, dato3>::obtener2() {
    return valor2;
}

template<class dato, class dato2, class dato3>
void terna<dato, dato2, dato3>::establecer3(dato3 _valor3) {
    valor3 = _valor3;
}

template<class dato, class dato2, class dato3>
dato3 terna<dato, dato2, dato3>::obtener3() {
    return valor3;
}

template<class dato, class dato2, class dato3>
int terna<dato, dato2, dato3>::sumar() {
    return valor + valor2 + valor3;
}

template<class dato, class dato2, class dato3>
int terna<dato, dato2, dato3>::multi() {
    return valor * valor2 * valor3;
}

template<class dato, class dato2, class dato3>
void terna<dato, dato2, dato3>::mostrar() {
    cout << "Valor 1: " << valor << endl;
    cout << "Valor 2: " << valor2 << endl;
    cout << "Valor 3: " << valor3 << endl;
    cout << "Suma: " << sumar() << endl;
    cout << "Multiplicacion: " << multi() << endl;
}
