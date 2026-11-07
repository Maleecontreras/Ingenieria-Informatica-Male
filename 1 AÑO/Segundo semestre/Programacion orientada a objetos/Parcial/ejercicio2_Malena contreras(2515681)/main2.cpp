#include "clases2.h"
int main(){
    string marca, modelo, codigo;
    int anio, nchip;
    float duracion, voltaje, ampe;
    cout<<"Ingrese marca del electronico: ";
    cin>>marca;
    cout<<"Ingrese anio del electronico: ";
    cin>>anio;
    cout<<"Ingrese modelo de celular: ";
    cin>>modelo;
    cout<<"Ingrese codigo de celular: ";
    cin>>codigo;
    cout<<"Ingrese numero de chips de celular: ";
    cin>>nchip;
    cout<<"Ingrese duracion de la bateria: ";
    cin>>duracion;
    cout<<"Ingrese voltaje de la bateria: ";
    cin>>voltaje;
    cout<<"Ingrese amperios de la bateria: ";
    cin>>ampe;
    bateria b1(duracion, voltaje, ampe);
    celular c1(marca, anio, modelo, codigo, nchip, b1);
    c1.mostrarcelular();
}