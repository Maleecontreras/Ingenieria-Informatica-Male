#include "clases.h"
empleado::empleado(){}
empleado::empleado(string _nombre, int _dni, int _sueldo){
    nombre=_nombre;
    dni=_dni;
    sueldo=_sueldo;
}
void empleado::setnombre(string _nombre){
    nombre=_nombre;
}
string empleado::getnombre(){
    return nombre;
}
void empleado::setdni(int _dni){
    dni=_dni;
}
int empleado::getdni(){
    return dni;
}
void empleado::setsueldo(int _sueldo){
    sueldo=_sueldo;
}
int empleado::getsueldo(){
    return sueldo;
}
void empleado::mostrardatos(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Dni: "<<dni<<endl;
    cout<<"sueldo: "<<sueldo<<endl;
}
gerente::gerente(){}
gerente::gerente(string _nombre, int _dni, int _sueldo, string _area):empleado(_nombre, _dni, _sueldo){
    area=_area;
}
void gerente::setarea(string _area){
    area=_area;
}
string gerente::getarea(){
    return area;
}
void gerente::mostrardatos(){
    empleado::mostrardatos();
    cout<<"Area: "<<area<<endl;
}
supervisor::supervisor(){}
supervisor::supervisor(string _nombre, int _dni, int _sueldo, string _sector):empleado(_nombre, _dni, _sueldo){
    sector=_sector;
}
void supervisor::setsector(string _sector){
    sector=_sector;
}
string supervisor::getsector(){
    return sector;
}
void supervisor::mostrardatos(){
    empleado::mostrardatos();
    cout<<"Sector: "<<sector<<endl;
}
obrero::obrero(){}
obrero::obrero(string _nombre, int _dni, int _sueldo, string _fabrica):empleado(_nombre, _dni, _sueldo){
    fabrica=_fabrica;
}
void obrero::setfabrica(string _fabrica){
    fabrica=_fabrica;
}
string obrero::getfabrica(){
    return fabrica;
}
void obrero::mostrardatos(){
    empleado::mostrardatos();
    cout<<"Fabrica: "<<fabrica<<endl;
}