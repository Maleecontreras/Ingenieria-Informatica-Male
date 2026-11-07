#include "clases.h"

bateria::bateria(){}
bateria::bateria(string _codigo, int _capacidad, int _año){
    codigo=_codigo;
    capacidad=_capacidad;
    año=_año;
}
void bateria::setcodigo(string _codigo){
    codigo=_codigo;
}
string bateria::getcodigo(){
    return codigo;
}
void bateria::setcapacidad(int _capacidad){
    capacidad=_capacidad;
}
int bateria::getcapacidad(){
    return capacidad;
}
void bateria::setaño(int _año){
    año=_año;
}
int bateria::getaño(){
    return año;
}
void bateria::mostrardatosb(){
    cout<<"BATERIA"<<endl;
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Capacidad: "<<capacidad<<endl;
    cout<<"Año: "<<año<<endl;
}

celular::celular(){}
celular::celular(string _marca, string _modelo, int _año, bateria _b1){
    marca=_marca;
    modelo=_modelo;
    año=_año;
    b1=_b1;
}
void celular::setmarca(string _marca) {
        marca = _marca; 
    }
string celular::getmarca() {
    return marca; 
}
void celular::setmodelo(string _modelo) { 
    modelo = _modelo; 
}
string celular::getmodelo() { 
    return modelo; 
}
void celular::setaño(int _año) { 
    año = _año; 
}
int celular::getaño() { 
    return año; 
}
void celular::mostrardatosc() {
    cout << "CELULAR:" << endl;
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Año: " << año << endl;
    cout << endl;
    b1.mostrardatosb(); 
}
