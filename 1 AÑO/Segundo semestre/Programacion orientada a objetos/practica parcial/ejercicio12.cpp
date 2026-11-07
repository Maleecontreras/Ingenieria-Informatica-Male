#include <iostream>
using namespace std;

class persona{
    private:
    string nombre, direccion;
    int edad, dni;
    public:
    persona();
    persona(string, string, int, int);
    void setnombre(string);
    string getnombre();
    void setdireccion(string);
    string getdireccion();
    void setedad(int);
    int getedad();
    void setdni(int);
    int getdni();
    void mostrarpersona();
};
class facultad{
    private:
    string nombref, direccion;
    int telefono;
    public:
    facultad();
    facultad(string, string, int);
    void setnombref(string);
    string getnombref();
    void setdireccion(string);
    string getdireccion();
    void settelefono(int);
    int gettelefono();
    void mostrarfacultad();
};
class materia{
    private:
    string nombrem;
    int codigo, nota;
    public:
    materia();
    materia(string, int, int);
    void setnombrem(string);
    string getnombrem();
    void setcodigo(int);
    int getcodigo();
    void setnota(int);
    int getnota();
    void mostrarmateria();
};
class alumno:public persona{
    private:
    int clave;
    facultad f1;
    materia m1;
    public:
    alumno();
    alumno(string, string, int, int, int, facultad, materia);
    void setclave(int);
    int getclave();
    void mostraralumno();
};
persona::persona(){}
persona::persona(string _nombre, string _direccion, int _edad, int _dni){
    nombre=_nombre;
    direccion=_direccion;
    edad=_edad;
    dni=_dni;
}
void persona::setnombre(string _nombre){
    nombre=_nombre;
}
string persona::getnombre(){
    return nombre;
}
void persona::setdireccion(string _direccion){
    direccion=_direccion;
}
string persona::getdireccion(){
    return direccion;
}
void persona::setedad(int _edad){
    edad=_edad;
}
int persona::getedad(){
    return edad;
}
void persona::setdni(int _dni){
    dni=_dni;
}
int persona::getdni(){
    return dni;
}
void persona::mostrarpersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Dni: "<<dni<<endl;
    cout<<"Direccion: "<<direccion<<endl;
}
facultad::facultad(){}
facultad::facultad(string _nombref, string _direccion, int _telefono){
    nombref=_nombref;
    direccion=_direccion;
    telefono=_telefono;
}
void facultad::setnombref(string _nombref){
    nombref=_nombref;
}
string facultad::getnombref(){
    return nombref;
}
void facultad::setdireccion(string _direccion){
    direccion=_direccion;
}
string facultad::getdireccion(){
    return direccion;
}
void facultad::settelefono(int _telefono){
    telefono=_telefono;
}
int facultad::gettelefono(){
    return telefono;
}
void facultad::mostrarfacultad(){
    cout<<"Nombre facultad: "<<nombref<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Telefono: "<<telefono<<endl;
}
materia::materia(){}
materia::materia(string _nombrem, int _codigo, int _nota){
    nombrem=_nombrem;
    codigo=_codigo;
    nota=_nota;
}
void materia::setnombrem(string _nombrem){
    nombrem=_nombrem;
}
string materia::getnombrem(){
    return nombrem;
}
void materia::setcodigo(int _codigo){
    codigo=_codigo;
}
int materia::getcodigo(){
    return codigo;
}
void materia::setnota(int _nota){
    nota=_nota;
}
int materia::getnota(){
    return nota;
}
void materia::mostrarmateria(){
    cout<<"Materia: "<<nombrem<<endl;
    cout<<"Codigo: "<<codigo<<endl;
    cout<<"Nota final: "<<nota<<endl;
}
alumno::alumno(){}
alumno::alumno(string _nombre, string _direccion, int _edad, int _dni, int _clave, facultad _f1, materia _m1):persona(_nombre, _direccion, _edad, _dni){
    clave=_clave;
    f1=_f1;
    m1=_m1;
}
void alumno::setclave(int _clave){
    clave=_clave;
}
int alumno::getclave(){
    return clave;
}
void alumno::mostraralumno(){
    cout<<"*******DATOS ALUMNO*********"<<endl;
    mostrarpersona();
    cout<<"clave alumno: "<<clave<<endl;
    cout<<"*******FACULTAD*******"<<endl;
    f1.mostrarfacultad();
    cout<<"*******MATERIA********"<<endl;
    m1.mostrarmateria();
}
int main(){
    string nombrep, direccionp, nombref, direccionf, nombrem;
    int edad, dni, clave, telefono, codigo, nota;
    cout<<"Ingrese nombre persona: ";
    cin>>nombrep;
    cout<<"Ingrese edad: ";
    cin>>edad;
    cout<<"Ingrese dni: ";
    cin>>dni;
    cout<<"Ingrese direccion: ";
    cin>>direccionp;
    cout<<"Ingrese clave alunmo: ";
    cin>>clave;
    cout<<"Ingrese nombre facultad: ";
    cin>>nombref;
    cout<<"Ingrese direccion: ";
    cin>>direccionf;
    cout<<"Ingrese telefono: ";
    cin>>telefono;
    cout<<"Ingrese nombre materia: ";
    cin>>nombrem;
    if(nombrem=="fisica"||nombrem=="algebra"){
        cout<<"Ingrese nota del 0-100";
        cin>>nota;
    }
    if(nombrem=="PensamientoF"||nombrem=="Introduccionl"){
        cout<<"Ingrese nota del 0-10: ";
        cin>>nota;
    }
    cout<<"Ingrese codigo: ";
    cin>>codigo;
    facultad f1(nombref, direccionf, telefono);
    materia m1(nombrem, codigo, nota);
    alumno a1(nombrep, direccionp, edad,dni,clave, f1, m1);
    a1.mostraralumno();
    if(nombrem=="PensamientoF"||nombrem=="Introduccionl"){
        if(nota<4){
            cout<<"Deficiente"<<endl;
        }else if(nota>=4 && nota<7){
            cout<<"Regular"<<endl;
        }else{
            cout<<"Muy bueno"<<endl;
        }
    }
}  