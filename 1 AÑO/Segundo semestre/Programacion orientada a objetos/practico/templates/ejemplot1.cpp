#include <iostream>
using namespace std;

template<class dato>

class contenedor{
    private:
    dato valor;
    public:
    contenedor();
    contenedor(dato);
    void establecervalor(dato);
    dato obtener();
};
template<class dato>
contenedor<dato>::contenedor(){}
template<class dato>
contenedor<dato>::contenedor(dato _valor){
    valor=_valor;
}
template<class dato>
void contenedor<dato>::establecervalor(dato _valor){
    valor=_valor;
}
template<class dato>
dato contenedor<dato>::obtener(){
    return valor;
};

int main(){
    contenedor <int> c1;
    c1. establecervalor(10);
    cout<<"El valor de C1 es:"<<c1.obtener()<<endl;
    contenedor <string> c2;
    c2. establecervalor("hola mundo");
    cout<<"El valor de C2 es:"<<c2.obtener()<<endl;
    contenedor <float> c3;
    c3. establecervalor(10.23);
    cout<<"El valor de C3 es:"<<c3.obtener()<<endl;
}