#include <iostream>
using namespace std;

class empleado{
    private:
    string nombre;
    int dni, sueldo;
    public:
    empleado();
    empleado(string, int, int);
    void setnombre(string);
    string getnombre();
    void setdni(int);
    int getdni();
    void setsueldo(int);
    int getsueldo();
    virtual void mostrardatos();
};
class gerente: public empleado{
    private:
    string area;
    public:
    gerente();
    gerente(string, int, int, string);
    void setarea(string);
    string getarea();
    void mostrardatos();
};
class supervisor: public empleado{
    private:
    string sector;
    public:
    supervisor();
    supervisor(string, int, int, string);
    void setsector(string);
    string getsector();
    void mostrardatos();
};
class obrero:public empleado{
    private:
    string fabrica;
    public:
    obrero();
    obrero(string, int, int, string);
    void setfabrica(string);
    string getfabrica();
    void mostrardatos();
};
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
int main(){
    empleado *A[4];
    A[0]=new empleado("maria", 665892, 50);
    A[1]=new gerente("ma", 65892, 80, "Administrativo");
    A[2]=new supervisor("mara", 65892, 90, "Gerencia");
    A[3]=new supervisor("mia", 892, 100, "samsung");
    for(int i=0; i<4; i++){
        A[i]->mostrardatos();
    }
}