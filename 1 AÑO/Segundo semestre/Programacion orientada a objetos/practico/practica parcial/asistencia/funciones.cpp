#include "clases.h"

persona::persona(){}
persona::persona(string _nombrep, int _edad){
    nombrep=_nombrep;
    edad=_edad;
}
void persona::setnombrep(string _nombrep){
    nombrep=_nombrep;
}
string persona::getnombrep(){
    return nombrep;
}
void persona::setedad(int _edad){
    edad=_edad;
}
int persona::getedad(){
    return edad;
}
void persona::mostrardatosp(){
    cout<<"Nombre de la persona es: "<<nombrep<<endl;
    cout<<"La edad de la persona es "<<edad<<endl;
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
void materia::mostrardatosm(){
    cout<<"Nombre materia: "<<nombrem<<endl;
    cout<<"Codigo materia: "<<codigo<<endl;
    cout<<"Nota en la materia: "<<nota<<endl;
}
estudiante::estudiante(){}
estudiante::estudiante(string _nombrem, int _edad, int _clave, materia):persona(_nombrem, _edad){
    clave=_clave;
}
void estudiante::setclave(int _clave){
    clave=_clave;
}
int estudiante::getclave(){
    return clave;
}
void estudiante::mostrardatose(){
    mostrardatosp();
    a1.mostrardatosm();
    cout<<"La clave del estudiante es: "<<clave<<endl;
}