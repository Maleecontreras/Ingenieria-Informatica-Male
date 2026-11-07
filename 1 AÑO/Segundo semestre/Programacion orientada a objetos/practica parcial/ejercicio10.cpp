#include <iostream>
using namespace std;

class cuenta{
    private:
    string titular;
    float cantidad;
    public:
    cuenta();
    cuenta(string, float);
    void settitular(string);
    string gettitular();
    void setcantidad(float);
    float getcantidad();
    void ingresar(float);//Metodo para ingresar plata, ademas de los de siempre
    void retirar(float);
    void mostrarcuenta();
};
cuenta::cuenta(){}
cuenta::cuenta(string _titular, float _cantidad){
    titular=_titular;
    if(_cantidad<0){
        cantidad=0;
    } else{
        cantidad=_cantidad;
    }
}
void cuenta::settitular(string _titular){
    titular=_titular;
}
string cuenta::gettitular(){
    return titular;
}
void cuenta::setcantidad(float _cantidad){
    if (_cantidad<0){
        cantidad=0;
    }else{
        cantidad=_cantidad;
    }
}
float cuenta::getcantidad(){
    return cantidad;
}
void cuenta::ingresar(float _cantidad){
    if(_cantidad >0){
        cantidad=cantidad+_cantidad;
    }
}
void cuenta::retirar(float _cantidad){
    if(cantidad-_cantidad<0){
        cantidad=0;
    }else{
        cantidad=cantidad -_cantidad;
    }
}
void cuenta::mostrarcuenta(){
    cout<<"Titular: "<<titular<<endl;
    cout<<"Cantidad actual: $"<<cantidad<<endl;
}
int main(){
    string nombre;
    float saldoinicial, ingreso, retirar;
    cout<<"Ingrese el nombre del titular: ";
    cin>>nombre;
    cout<<"Ingrese cantidad inicial(0 si no tiene): ";
    cin>>saldoinicial;
    cuenta c1(nombre, saldoinicial);
    cout<<"*******ESTADO INICIAL********"<<endl;
    c1.mostrarcuenta();

    cout<<"Ingrese la cantidad a ingresar: ";
    cin>>ingreso;
    c1.ingresar(ingreso);

    cout<<"Ingrese cantidad a retirar: ";
    cin>>retirar;
    c1.retirar(retirar);

    cout<<"*********ESTADO FINAL DE LA CUENTA***********"<<endl;
    c1.mostrarcuenta();
    return 0;

}