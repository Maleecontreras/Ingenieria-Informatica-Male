#include <iostream>
using namespace std;
//Ejercicio 1 – Flota de transporte y mantenimiento

//Clases: Vehiculo: marca, modelo, año, kmRecorridos Camion: hereda de Vehiculo, agrega capacidadCarga (en toneladas). Mantenimiento: tipoServicio, costoBase EmpresaTransporte: nombre, lista de Camiones (composición). El programa debe: Cargar los datos de una empresa con 2 camiones. Calcular el costo total de mantenimiento, aplicando:
//+15% si el camión tiene más de 10 años, +10% si supera los 200.000 km. Mostrar el camión más antiguo y el costo final de cada mantenimiento.
class vehiculo{
    private:
    string marca, modelo;
    int año, km;
    public:
    vehiculo();
    vehiculo(string, string, int, int);
    void setmarca(string);
    string getmarca();
    void setmodelo(string);
    string getmodelo();
    void setaño(int);
    int getaño();
    void setkm(int);
    int getkm();
    void mostrarv();
};
class empresa{
    private:
    string nombre, lista;
    public:
    empresa();
    empresa(string, string);
    void setnombre(string);
    string getnombre();
    void setlista(string);
    string getlista();
    void mostrarempresa();
};
class mante{
    private:
    string tipo;
    int costo;
    public:
    mante();
    mante(string, int);
    void settipo(string);
    string gettipo();
    void setcosto(int);
    int getcosto();
    void mostrarmante();
};
class camion: public vehiculo{
    private:
    int capacidad;
    mante m1;
    empresa e1;
    public:
    camion();
    camion(string, string, int, int, int, mante, empresa);
    void setcapacidad(int);
    int getcapacidad();
    void mostrarcamion();
};
class camion2: public vehiculo{
    private:
    int capacidad2;
    mante m2;
    empresa e2;
    public:
    camion2();
    camion2(string, string, int, int, int, mante, empresa);
    void setcapacidad2(int);
    int getcapacidad2();
    void mostrarcamion2();
};
vehiculo::vehiculo(){}
vehiculo::vehiculo(string _marca, string _modelo, int _año, int _km){
    marca=_marca;
    modelo=_modelo;
    año=_año;
    km=_km;
}
void vehiculo::mostrarv(){
    cout<<"Marca: "<<marca<<endl;
    cout<<"Modelo: "<<modelo<<endl;
    cout<<"Año: "<<año<<endl;
    cout<<"Km recorridos: "<<km<<endl;
}
empresa::empresa(){}
empresa::empresa(string _nombre, string _lista){
    nombre=_nombre;
    lista=_lista;
}
void empresa::mostrarempresa(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Lista: "<<lista<<endl;
}
mante::mante(){}
mante::mante(string _tipo, int _costo){
    tipo=_tipo;
    costo=_costo;
}
void mante::mostrarmante(){
    cout<<"Tipo: "<<tipo<<endl;
    cout<<"Costo: "<<costo<<endl;
}
camion::camion(){}
camion::camion(string _marca, string _modelo, int _año, int _km, int _capacidad, mante _m1, empresa _e1):vehiculo(_marca, _modelo, _año, _km){
    capacidad=_capacidad;
    m1=_m1;
    e1=_e1;
}
void camion::mostrarcamion(){
    mostrarv();
    e1.mostrarempresa();
    m1.mostrarmante();
}
camion2::camion2(){}
camion2::camion2(string _marca, string _modelo, int _año, int _km, int _capacidad2, mante _m2, empresa _e2):vehiculo(_marca, _modelo, _año, _km){
    capacidad2=_capacidad2;
    m2=_m2;
    e2=_e2;
}
void camion2::mostrarcamion2(){
    mostrarv();
    e2.mostrarempresa();
    m2.mostrarmante();
}
int main(){
    string marca, modelo, tipo1, nombre1, lista1;
    int año, km, capacidad1, costo1;
    cout<<"**********DATOS CAMIONES************"<<endl;
    cout<<"Ingrese marca: ";
    cin>>marca;
}
