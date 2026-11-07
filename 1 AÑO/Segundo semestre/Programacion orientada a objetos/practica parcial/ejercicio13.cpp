#include <iostream>
using namespace std;

class fran{
    private:
    string nombre;
    public:
    fran();
    fran(string);
    void setnombre(string);
    string getnombre();
    void mostrarfran();
};
class gerente{
    private:
    string nombreg;
    int dni;
    public:
    gerente();
    gerente(string, int);
    void setnombreg(string);
    string getnombreg();
    void setdni(int);
    int getdni();
    void mostrargerente();
};
class sucursal:public fran{
    private:
    string direccion;
    int codigo;
    gerente g1;
    public:
    sucursal();
    sucursal(string,string, int, gerente);
    void setdireccion(string);
    string getdireccion();
    void setcodigo(int);
    int getcodigo();
    void mostrarsucursal();
    int invertirCodigo(int);
};

fran::fran(){}
fran::fran(string _nombre){
    nombre=_nombre;
}
void fran::setnombre(string _nombre){
    nombre=_nombre;
}
string fran::getnombre(){
    return nombre;
}
void fran::mostrarfran(){
    cout<<"*****FRANQUICIA******"<<endl;
    cout<<"Nombre: "<<nombre<<endl;
}
gerente::gerente(){}
gerente::gerente(string _nombreg, int _dni){
    nombreg=_nombreg;
    dni=_dni;
}
void gerente::setnombreg(string _nombreg){
    nombreg=_nombreg;
}
string gerente::getnombreg(){
    return nombreg;
}
void gerente::setdni(int _dni){
    dni=_dni;
}
int gerente::getdni(){
    return dni;
}
void gerente::mostrargerente(){
    cout<<"******GERENTE******"<<endl;
    cout<<"Nombre: "<<nombreg<<endl;
    cout<<"Dni: "<<dni<<endl;
}
sucursal::sucursal(){}
sucursal::sucursal(string _nombre, string _direccion, int _codigo, gerente _g1):fran(_nombre){
    direccion=_direccion;
    codigo=_codigo;
    g1=_g1;
}
void sucursal::setdireccion(string _direccion){
    direccion=_direccion;
}
string sucursal::getdireccion(){
    return direccion;
}
void sucursal::setcodigo(int _codigo){
    codigo=_codigo;
}
int sucursal::getcodigo(){
    return codigo;
}
void sucursal::mostrarsucursal(){
    mostrarfran();
    g1.mostrargerente();
    cout<<"******SUCURSAL*******"<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Codigo: "<<invertirCodigo(codigo)<<endl;
}
int sucursal::invertirCodigo(int num) {
    int invertido = 0;
    while (num > 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }
    return invertido;
}
int main(){
    gerente g1("Adolfo", 47665892);
    sucursal s1("Kika", "Los buhos", 1234, g1);
    s1.mostrarsucursal();
}