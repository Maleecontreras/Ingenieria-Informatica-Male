#include <iostream>
using namespace std;

class electro{
    private:
    string marca;
    int anio;
    public:
    electro();
    electro(string, int);
    void setmarca(string);
    string getmarca();
    void setanio(int);
    int getanio();
    void mostrarelectro();

};
class bateria{
    private:
    float duracion, voltaje, ampe;
    public:
    bateria();
    bateria(float, float,float);
    void setduracion(float);
    float getduracion();
    void setvoltaje(float);
    float getvoltaje();
    void setamp(float);
    float getamp();
    void mostrarbateria();

};
class celular:public electro{
    private:
    string modelo, codigo;
    int nchip;
    bateria b1;
    public:
    celular();
    celular(string, int, string, string, int, bateria);
    void setmodelo(string);
    string getmodelo();
    void setcodigo(string);
    string getcodigo();
    void setnchip(int);
    int getnchip();
    void mostrarcelular();
};

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