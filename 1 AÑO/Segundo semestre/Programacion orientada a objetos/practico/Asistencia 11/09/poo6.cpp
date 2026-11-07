#include "clases.h"
//implementaciones
persona::persona(){};
persona::persona(string _nombre, string _apellido, int _edad){
    nombre=_nombre;
    apellido=_apellido;
    edad=_edad;
}
void persona::mostrardatos(){
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"Apellido:"<<apellido<<endl;
    cout<<"Edad:"<<edad<<endl;
}

estudiante::estudiante(){};
estudiante::estudiante(string _nombre, string _apellido, int _edad, float _notafinal, string _carrera,int _año):persona(_nombre,_apellido,_edad){
    carrera=_carrera;
    año=_año;
    notafinal=_notafinal;
}
void estudiante::mostrardatosestudiante(){
    estudiante::mostrardatosestudiante();
    cout<<"Carrera: "<<carrera<<endl;
    cout<<"Año: "<<año<<endl;
    cout<<"Nota: "<<notafinal<<endl;
}
profesor::profesor(){};
profesor::profesor(string _nombre, string _apellido, int _edad, float _sueldo):persona(_nombre,_apellido,_edad){
    sueldo=_sueldo;
}
void profesor::mostrardatosprofesor(){
    persona::mostrardatos();//Llama a la funcion de la clase base.
    cout<<"Sueldo:"<<sueldo<<endl;
    cout<<"Carrera: "<<carrera<<endl;
    cout<<"Horas: "<<horas<<endl;
}

titular::titular(){};
titular::titular(string _nombre, string _apellido, int _edad,float _sueldo,int _codigo):profesor(_nombre,_apellido,_edad,_sueldo){
    codigo=_codigo;
}
void titular::mostrardatostitular(){
    profesor::mostrardatosprofesor();//Llama a la funcion de la clase base.
    cout<<"Codigo: "<<codigo<<endl;
}
pase::pase(){};
pase::pase(string _nombre, string _apellido, int _edad,float _notafinal,int _codigo):estudiante(_nombre,_apellido,_edad,_notafinal, _carrera, _notafinal){
    codigo=_codigo;
}
void pase::mostrardatospase(){
    estudiante::mostrardatosestudiante();
    cout<<"Codigo: "<<codigo<<endl;
}
