#include <iostream>
using namespace std;

class persona{
    private:
    string nombre;
    int edad;
    public:
    persona();
    persona(string, int);
    void setnombre(string);
    string getnombre();
    void setedad(int);
    int getedad();
    void mostrarpersona();
};
class membresia{
    private:
    string tipo;
    int precio;
    public:
    membresia();
    membresia(string, int);
    void settipo(string);
    string gettipo();
    void setprecio(int);
    int getprecio();
    void mostrarmembresia();
};
class socio:public persona{
    private:
    int nro;
    membresia m1;
    public:
    socio();
    socio(string, int, int, membresia);
    void setnro(int);
    int getnro();
    void mostrarsocio();
};
persona::persona(){}
persona::persona(string _nombre, int _edad){
    nombre=_nombre;
    edad=_edad;
}
void persona::setnombre(string _nombre){
    nombre=_nombre;
}
string persona::getnombre(){
    return nombre;
}
void persona::setedad(int _edad){
    edad=_edad;
}
int persona::getedad(){
    return edad;
}
void persona::mostrarpersona(){
    cout<<"*********CLIENTE*************"<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
membresia::membresia(){}
membresia::membresia(string _tipo, int _precio){
    tipo=_tipo;
    precio=_precio;
}
void membresia::settipo(string _tipo){
    tipo=_tipo;
}
string membresia::gettipo(){
    return tipo;
}
void membresia::setprecio(int _precio){
    precio=_precio;
}
int membresia::getprecio(){
    return precio;
}
void membresia::mostrarmembresia(){
    cout<<"Tipo: "<<tipo<<endl;
    cout<<"Precio: $"<<precio<<endl;
}
socio::socio(){}
socio::socio(string _nombre, int _edad, int _nro, membresia _m1):persona(_nombre, _edad){
    nro=_nro;
    m1=_m1;
}
void socio::setnro(int _nro){
    nro=_nro;
}
int socio::getnro(){
    return nro;
}
void socio::mostrarsocio(){
    mostrarpersona();
    m1.mostrarmembresia();
    cout<<"Nro: "<<nro<<endl;
}
int main(){
    string nombre, tipo;
    int edad, nro, precio;
    cout<<"Ingrese nombre: ";
    cin>>nombre;
    cout<<"Ingrese edad: ";
    cin>>edad;
    cout<<"Ingrese nro socio: ";
    cin>>nro;
    cout<<"Ingrese tipo membresia(estandar o premium): ";
    cin>>tipo;
    cout<<"Ingrese precio: ";
    cin>>precio;
    if (tipo=="premium"){
        precio=precio+precio*0.15;
    }
    if(edad<18){
        precio=precio-precio*0.20;
    }
    membresia m1(tipo, precio);
    socio s1(nombre, edad, nro, m1);
    s1.mostrarsocio();
}