#include <iostream>
using namespace std;

class uni{
    private:
    string nombre, ciudad;
    public:
    uni();
    uni(string, string);
    void setnombre(string);
    string getnombre();
    void setciudad(string);
    string getciudad();
    void mostraruni();
};
class facultad{
    private:
    string nombref;
    int telefono;
    public:
    facultad();
    facultad(string, int);
    void setnombref(string);
    string getnombref();
    void settelefono(int);
    int gettelefono();
    void mostrarfacultad();
};
class profe:public uni{
    private:
    string nombrep;
    int dni, salario;
    facultad f1;
    public:
    profe();
    profe(string, string, string, int, int, facultad);
    void setnombrep(string);
    string getnombrep();
    void setdni(int);
    int getdni();
    void setsalario(int);
    int getsalario();
    void mostrarprofe();
};
uni::uni(){}
uni::uni(string _nombre, string _ciudad){
    nombre=_nombre;
    ciudad=_ciudad;
}
void uni::setnombre(string _nombre){
    nombre=_nombre;
}
string uni::getnombre(){
    return nombre;
}
void uni::setciudad(string _ciudad){
    ciudad=_ciudad;
}
string uni::getciudad(){
    return ciudad;
}
void uni::mostraruni(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Ciudad: "<<ciudad<<endl;
}
facultad::facultad(){}
facultad::facultad(string _nombref, int _telefono){
    nombref=_nombref;
    telefono=_telefono;
}
void facultad::setnombref(string _nombref){
    nombref=_nombref;
}
string facultad::getnombref(){
    return nombref;
}
void facultad::settelefono(int _telefono){
    telefono=_telefono;
}
int facultad::gettelefono(){
    return telefono;
}
void facultad::mostrarfacultad(){
    cout<<"Nombre: "<<nombref<<endl;
    cout<<"Telefono: "<<telefono<<endl;
}
profe::profe(){}
profe::profe(string _nombre, string _ciudad, string _nombrep, int _dni, int _salario, facultad _f1):uni(_nombre, _ciudad){
    nombrep=_nombrep;
    dni=_dni;
    salario=_salario;
    f1=_f1;
}
void profe::setnombrep(string _nombrep){
    nombrep=_nombrep;
}
string profe::getnombrep(){
    return nombrep;
}
void profe::setdni(int _dni){
    dni=_dni;
}
int profe::getdni(){
    return dni;
}
void profe::setsalario(int _salario){
    salario=_salario;
}
int profe::getsalario(){
    return salario;
}
void profe::mostrarprofe(){
    cout<<"******UNIVERSIDAD******"<<endl;
    mostraruni();
    cout<<"*******FACULTAD********"<<endl;
    f1.mostrarfacultad();
    cout<<"Profesor"<<endl;
    cout<<"Nombre: "<<nombrep<<endl;
    cout<<"Dni: "<<dni<<endl;
    cout<<"Salario: "<<salario<<endl;
}
int main(){
    int n, i, total;
    cout<<"Cuantos profesores desea ingresar? ";
    cin>>n;
    profe lista[n];
    string nombrep;
    int s;
    for(i=0; i<n; i++){
        cout<<"Ingrese el nombre del profesor "<<i+1<<endl;
        cin>>nombrep;
        cout<<"Ingrese el salario del profesor "<<i+1<<endl;
        cin>>s;
        if(s<40000){
        s=s+s*0.15;
        cout<<"Se aplico un aumento del 15%: "<<s<<endl;
        }
        facultad f1("ing", 456456);
        lista[i]=profe("UCC", "cordoba",nombrep, 47665892, s, f1);
        total=total+s;
    }
    float promedio=total/n;
    
    for(int i=0; i<n; i++){
        cout<<"INFORME PROFE "<<i+1<<endl;
        lista[i].mostrarprofe();
    }
    cout<<"Promedio de los salarios: $"<<promedio<<endl;
    cout<<"Total a pagar: $"<<total<<endl;

}