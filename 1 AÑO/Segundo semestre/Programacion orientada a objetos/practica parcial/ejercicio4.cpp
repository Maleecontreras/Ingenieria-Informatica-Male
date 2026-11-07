#include <iostream>
using namespace std;

class persona{
    private:
    string nombre, direccion;
    int dni, edad;
    public:
    persona();
    persona(string, string, int, int);
    void setnombre(string);
    string getnombre();
    void setdireccion(string);
    string getdireccion();
    void setdni(int);
    int getdni();
    void setedad(int);
    int getedad();
    void mostrarpersona();
};
class sueldo{
    private:
    int monto;
    public:
    sueldo();
    sueldo(int);
    void setmonto(int);
    int getmonto();
    void mostrarsueldo();
};
class empleado: public persona{
    private:
    int clave;
    sueldo s1;
    public:
    empleado();
    empleado(string, string, int, int,int, sueldo);
    void setclave(int);
    int getclave();
    void mostrarempleado();
};

persona::persona(){}
persona::persona(string _nombre, string _direccion, int _edad, int _dni){
    nombre=_nombre;
    direccion=_direccion;
    edad=_edad;
    dni=_dni;
}
void persona::setnombre(string _nombre){
    nombre=_nombre;
}
string persona::getnombre(){
    return nombre;
}
void persona::setdireccion(string _direccion){
    direccion=_direccion;
}
string persona::getdireccion(){
    return direccion;
}
void persona::setedad(int _edad){
    edad=_edad;
}
int persona::getedad(){
    return edad;
}
void persona::setdni(int _dni){
    dni=_dni;
}
int persona::getdni(){
    return dni;
}
void persona::mostrarpersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Dni: "<<dni<<endl;
}
sueldo::sueldo(){}
sueldo::sueldo(int _monto){
    monto=_monto;
}
void sueldo::setmonto(int _monto){
    monto=_monto;
}
int sueldo::getmonto(){
    return monto;
}
void sueldo::mostrarsueldo(){
    cout<<"El sueldo es: "<<monto<<endl;
}

empleado::empleado(){}
empleado::empleado(string _nombre, string _direccion, int _edad, int _dni,int _clave, sueldo _s1):persona(_nombre, _direccion, _edad, _dni){
    clave=_clave;
    s1=_s1;
}
void empleado::setclave(int _clave){
    clave=_clave;
}
int empleado::getclave(){
    return clave;
}
void empleado::mostrarempleado(){
    mostrarpersona();
    s1.mostrarsueldo();
    cout<<"La clave es: "<<clave<<endl;
}
int main(){
    string e, d;
    int ed, dni, c, s;
    cout<<"Ingrese el nombre del empleado: "<<endl;
    cin>>e;
    cout<<"Ingrese la direccion del empleado: "<<endl;
    cin>>d;
    cout<<"Ingrese la edad del empleado: "<<endl;
    cin>>ed;
    cout<<"Ingrese el dni del empleado: "<<endl;
    cin>>dni;
    cout<<"Ingrese la clave del empleado: "<<endl;
    cin>>c;
    cout<<"Ingrese el sueldo del empleado: "<<endl;
    cin>>s;
    if(s < 500000){
    s = s + s*0.20;
    }
    else if(s >= 500000 && s < 1000000){
        s = s + s*0.15;
    }
    else{
        s = s + s*0.10;
    }

    sueldo s1(s);
    empleado p1(e, d, ed, dni, c, s1);
    p1.mostrarempleado();
}