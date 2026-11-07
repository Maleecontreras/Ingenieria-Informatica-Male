#include <iostream>
using namespace std;


class persona{
    private:
    string nombre;
    string apellido;
    int edad;
    public:
    persona();
    persona(string, string, int);
    void mostrardatos();
};

class estudiante:public persona{//Hereda los datos de la clase persona.
    private:
    float notafinal;
    public:
    estudiante();
    estudiante(string,string,int,float);
    void mostrardatosestudiante();
};
class empleado:public persona{
    private:
    float sueldo;
    public:
    empleado();
    empleado(string,string,int,float);
    void mostrardatosempleado();
};
class universitario:public estudiante{
    private:
    int claveucc;
    public:
    universitario();
    universitario(string, string, int,float,int);
    void mostrardatosuniversitario();
};
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

universitario::universitario(){};
universitario::universitario(string _nombre, string _apellido, int _edad, float _notafinal, int _claveucc):estudiante(_nombre,_apellido,_edad,_notafinal){
    claveucc=_claveucc;
}
void universitario::mostrardatosuniversitario(){
    estudiante::mostrardatosestudiante();
    cout<<"clave ucc: "<<claveucc<<endl;
}

empleado::empleado(){};
empleado::empleado(string _nombre, string _apellido, int _edad, float _sueldo):persona(_nombre,_apellido,_edad){
    sueldo=_sueldo;
}
void empleado::mostrardatosempleado(){
    persona::mostrardatos();//Llama a la funcion de la clase base.
    cout<<"Sueldo:"<<sueldo<<endl;
}

estudiante::estudiante(){}
estudiante::estudiante(string _nombre, string _apellido, int _edad, float _notafinal):persona(_nombre,_apellido,_edad){
    notafinal=_notafinal;
}
void estudiante::mostrardatosestudiante(){
    persona::mostrardatos();//Llama a la funcion de la clase base.
    cout<<"Nota final:"<<notafinal<<endl;
}
int main(){
    persona p1("male", "contreras", 18);
    estudiante e1("juan", "perez", 20, 4.5);
    empleado em1("ana", "gomez", 30, 1500.50);
    universitario u1("carlos", "lopez", 22, 5.0, 12345);
    p1.mostrardatos();
    e1.mostrardatosestudiante();
    em1.mostrardatosempleado();
    u1.mostrardatosuniversitario();
}