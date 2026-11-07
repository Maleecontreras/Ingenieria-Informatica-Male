#include <iostream>
using namespace std;

class franquicia{
    private:
    string nombref, direccionf;
    int codigof;
    public:
    franquicia();
    franquicia(string, string, int);
    void mostrardatosf();
    void setnombref(string);
    string getnombref();
    void setdireccionf(string);
    string getdireccionf();
    void setcodigof(int);
    int getcodigof();
};

class gerente{
    private:
    string nombreg;
    int dni;
    public:
    gerente();
    gerente(string, int);
    void mostrardatosg();
    void setnombreg(string);
    string getnombreg();
    void setdni(int);
    int getdni();
};
class sucursal:public franquicia{
    private:
    string direccions;
    int codigos;
    gerente g1;
    public:
    sucursal();
    sucursal(string,string,int,string,int, gerente);
    void mostrardatoss();
    void setnombres(string);
    string getnombres();
    void setdireccions(string);
    string getdireccions();
    void setcodigos(int);
    int getcodigos();
};

franquicia::franquicia(){}
franquicia::franquicia(string _nombref, string _direccionf, int _codigof){
    nombref=_nombref;
    direccionf=_direccionf;
    codigof=_codigof;
}
void franquicia::setnombref(string _nombref){
    nombref=_nombref;
}
string franquicia::getnombref(){
    return nombref;
}
void franquicia::setdireccionf(string _direccionf){
    direccionf=_direccionf;
}
string franquicia::getdireccionf(){
    return direccionf;
}
void franquicia::setcodigof(int _codigof){
    codigof=_codigof;
}
int franquicia::getcodigof(){
    return codigof;
}

void franquicia::mostrardatosf(){
    cout<<"El nombre de la franquicia: "<<nombref<<endl;
    cout<<"La dirección es "<<direccionf<<endl;
    cout<<"El codigo de la franquicia es: "<<codigof<<endl;
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
void gerente::mostrardatosg(){
    cout<<"El gerente es: "<<nombreg<<endl;
    cout<<"El dni es: "<<dni<<endl;
}
sucursal::sucursal(){}
sucursal::sucursal(string _nombref, string _direccionf, int _codigof, string _direccions, int _codigos,gerente _g1):franquicia(_nombref, _direccionf, _codigof){
    direccions=_direccions;
    codigos=_codigos;
    g1=_g1;
}
void sucursal::setdireccions(string _direccions){
    direccions=_direccions;
}
string sucursal::getdireccions(){
    return direccions;
}
void sucursal::setcodigos(int _codigos){
    codigos=_codigos;
}
int sucursal::getcodigos(){
    return codigos;
}
void sucursal::mostrardatoss(){
    mostrardatosf();
    g1.mostrardatosg();
    cout<<"La direccion de la sucursal es: "<<direccions<<endl;
    cout<<"El codigo de la sucursal es: "<<codigos<<endl;
}
int main(){
    // Creo un gerente, no creo a la franquicia porque ya le paso los datos en sucursal abajo
    gerente g1("Carlos Pérez", 12345678);
    sucursal s1("Apple", "Los buhos", 2653, "Av. Brasil 123", 23156, g1);//aca
    s1.mostrardatoss();
}