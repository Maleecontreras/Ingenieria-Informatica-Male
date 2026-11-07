#include "clases1.h"
animal::animal(){}
animal::animal(string _nombre, int _edad){
    nombre=_nombre;
    edad=_edad;
}

void animal::setnombre(string _nombre){
    nombre=_nombre;
}
string animal::getnombre(){
    return nombre;
}
void animal::setedad(int _edad){
    edad=_edad;
}
int animal::getedad(){
    return edad;
}
void animal::mostrarani(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
vacuna::vacuna(){}
vacuna::vacuna(int _fecha, string _nombrev){
    fecha=_fecha;
    nombrev=_nombrev;
}
void vacuna::setfecha(int _fecha){
    fecha=_fecha;
}
int vacuna::getfecha(){
    return fecha;
}
void vacuna::setnombrev(string _nombrev){
    nombrev=_nombrev;
}
string vacuna::getnombrev(){
    return nombrev;
}
void vacuna::mostrarva(){
    cout<<"Fecha: "<<fecha<<endl;
    cout<<"Nombre: "<<nombrev<<endl;
}
collar::collar(){}
collar::collar(string _material, int _dia){
    material=_material;
    dia=_dia;
}
void collar::setmaterial(string _material){
    material=_material;
}
string collar::getmaterial(){
    return material;
}
void collar::setdia(int _dia){
    dia=_dia;
}
int collar::getdia(){
    return dia;
}
void collar::mostrarcollar(){
    cout<<"Material: "<<material<<endl;
    cout<<"Diametro: "<<dia<<endl;
}
perro::perro(){}
perro::perro(string _nombre, int _edad, int _tama, string _raza, vacuna _v1, collar _c1):animal(_nombre, _edad){
    tama=_tama;
    raza=_raza;
    v1=_v1;
    c1=_c1;
}
void perro::settama(int _tama){
    tama=_tama;
}
int perro::gettama(){
    return tama;
}
void perro::setraza(string _raza){
    raza=_raza;
}
string perro::getraza(){
    return raza;
}
void perro::mostrarperro(){
    cout<<"*****DATOS PERRO******"<<endl;
    mostrarani();
    cout<<"Tamaño: "<<tama<<endl;
    cout<<"Raza: "<<raza<<endl;
    cout<<"*****DATOS VACUNA*******"<<endl;
    v1.mostrarva();
    cout<<"*****DATOS COLLAR*******"<<endl;
    c1.mostrarcollar();
}