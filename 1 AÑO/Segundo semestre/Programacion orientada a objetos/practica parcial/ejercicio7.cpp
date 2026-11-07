#include <iostream>
using namespace std;

class vehiculo{
    private:
    int patente, año;
    public:
        vehiculo();
        vehiculo(int, int);
        void setpatente(int);
        int getpatente();
        void setaño(int);
        int getaño();
        void mostrarvehiculo();
};
class seguro{
    private:
        int monto;
        string tipo;
    public:
        seguro();
        seguro(int, string);
        void setmonto(int);
        int getmonto();
        void settipo(string);
        string gettipo();
        void mostrarseguro();
};
class car:public vehiculo{
    private:
    int puertas;
    seguro s1;
    public:
    car();
    car(int,int,int, seguro);
    void setpuertas(int);
    int getpuertas();
    void mostrarauto();
};
vehiculo::vehiculo(){}
vehiculo::vehiculo(int _patente, int _año){
    patente=_patente;
    año=_año;
}
void vehiculo::setpatente(int _patente){
    patente=_patente;
}
int vehiculo::getpatente(){
    return patente;
}
void vehiculo::setaño(int _año){
    año=_año;
}
int vehiculo::getaño(){
    return año;
}
void vehiculo::mostrarvehiculo(){
    cout<<"**********DATOS VEHICULO**************"<<endl;
    cout<<"Patente: "<<patente<<endl;
    cout<<"Año: "<<año<<endl;
}
seguro::seguro(){}
seguro::seguro(int _monto, string _tipo){
    monto=_monto;
    tipo=_tipo;
}
void seguro::setmonto(int _monto){
    monto=_monto;
}
int seguro::getmonto(){
    return monto;
}
void seguro::settipo(string _tipo){
    tipo=_tipo;
}
string seguro::gettipo(){
    return tipo;
}
void seguro::mostrarseguro(){
    cout<<"**********DATOS VSEGURO**************"<<endl;
    cout<<"Monto: "<<monto<<endl;
    cout<<"Tipo: "<<tipo<<endl;
}
car::car(){}
car::car(int _patente, int _año, int _puertas, seguro _s1):vehiculo(_patente, _año){
    puertas=_puertas;
    s1=_s1;
}
void car::setpuertas(int _puertas){
    puertas=_puertas;
}
int car::getpuertas(){
    return puertas;
}
void car::mostrarauto(){
    mostrarvehiculo();
    s1.mostrarseguro();
    cout<<"Puertas: "<<puertas;
}
int main(){
    int patente, año, puertas, monto;
    string tipo;
    cout<<"Ingrese patente: ";
    cin>>patente;
    cout<<"Ingrese año: ";
    cin>>año;
    cout<<"Ingrese puertas: ";
    cin>>puertas;
    cout<<"Ingrese monto seguro: ";
    cin>>monto;
    cout<<"Ingrese tipo seguro: ";
    cin>>tipo;
    if (año>10){
        monto=monto+monto*0.15;
    }else if(año<5){
        monto=monto-monto*0.10;
    }
    seguro s1(monto, tipo);
    car c1(patente, año, puertas, s1);
    c1.mostrarauto();
}