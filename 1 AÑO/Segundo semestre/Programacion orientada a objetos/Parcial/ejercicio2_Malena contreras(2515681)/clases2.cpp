#include "clases2.h"

electro::electro(){}
electro::electro(string _marca, int _anio){
    marca=_marca;
    anio=_anio;
}
void electro::setmarca(string _marca){
    marca=_marca;
}
string electro::getmarca(){
    return marca;
}
void electro::setanio(int _anio){
    anio=_anio;
}
int electro::getanio(){
    return anio;
}
void electro::mostrarelectro(){
    cout<<"Marca: "<<marca<<endl;
    cout<<"Anio de fabricacion: "<<anio<<endl;
}
bateria::bateria(){}
bateria::bateria(float _duracion, float _voltaje, float _ampe){
    duracion=_duracion;
    voltaje=_voltaje;
    ampe=_ampe;
}
void bateria::setduracion(float _duracion){
    duracion=_duracion;
}
float bateria::getduracion(){
    return duracion;
}
void bateria::setvoltaje(float _voltaje){
    voltaje=_voltaje;
}
float bateria::getvoltaje(){
    return voltaje;
}
void bateria::setamp(float _ampe){
    ampe=_ampe;
}
float bateria::getamp(){
    return ampe;
}
void bateria::mostrarbateria(){
    cout<<"Duracion: "<<duracion<<endl;
    cout<<"Voltaje: "<<voltaje<<endl;
    cout<<"Amperios: "<<ampe<<endl;
}
celular::celular(){}
celular::celular(string _marca, int _anio, string _modelo, string _codigo, int _nchip, bateria _b1):electro(_marca, _anio){
    modelo=_modelo;
    codigo=_codigo;
    nchip=_nchip;
    b1=_b1;
}
void celular::setmodelo(string _modelo){
    modelo=_modelo;
}
string celular::getmodelo(){
    return modelo;
}
void celular::setcodigo(string _codigo){
    codigo=_codigo;
}
string celular::getcodigo(){
    return codigo;
}
void celular::setnchip(int _nchip){
    nchip=_nchip;
}
int celular::getnchip(){
    return nchip;
}
void celular::mostrarcelular(){
    cout<<"*****DATOS ELECTRONICO******"<<endl;
    mostrarelectro();
    cout<<"******DATOS BATERIA*********"<<endl;
    b1.mostrarbateria();
    cout<<"******DATOS CELULAR*********"<<endl;
    cout<<"Modelo: "<<modelo<<endl;
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"N°chips:"<<nchip<<endl;
}