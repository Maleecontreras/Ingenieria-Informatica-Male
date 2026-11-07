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
