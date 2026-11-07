#include <iostream>
using namespace std;

template<class dato1, class dato2>

class par{
    private:
    dato1 valor1;
    dato2 valor2;
    public:
    par();
    par(dato1, dato2);
    void establecervalor1(dato1);
    dato1 obtener1();
    void establecervalor2(dato2);
    dato2 obtener2();
    void mostrar();
};

template<class dato1, class dato2>
par<dato1, dato2>::par(){}
template<class dato1, class dato2>
par<dato1, dato2>::par(dato1 _valor1, dato2 _valor2){
    valor1=_valor1;
    valor2=_valor2;
}

template<class dato1, class dato2>
void par<dato1, dato2>::establecervalor1(dato1 _valor1){
    valor1=_valor1;
}
template<class dato1, class dato2>
dato1 par<dato1, dato2>::obtener1(){
    return valor1;
}
template<class dato1, class dato2>
void par<dato1, dato2>::establecervalor2(dato2 _valor2){
    valor2=_valor2;
}
template<class dato1, class dato2>
dato2 par<dato1, dato2>::obtener2(){
    return valor2;
}
//NO TERMINADO.
int main(){

}