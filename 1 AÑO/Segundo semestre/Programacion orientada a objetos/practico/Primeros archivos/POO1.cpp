#include <iostream>
using namespace std;

class persona {
    private://atributos
    string nombre;
    int edad;
    string apellido;
    long dni;
    public:
    persona(string, int,string, long);
    void comer();
    void dormir();
    void caminar();
    void jugar();
};

persona::persona(string _nombre, int _edad, string _apellido, long _dni){//constructor que inicializa los atributos
    nombre=_nombre;
    edad=_edad;
    apellido=_apellido;
    dni=_dni;
}

void persona::comer(){
    cout<<"Mi nombre es: "<<nombre<<" y me gusta comer verduras "<<endl;
}

void persona::dormir(){
    cout<<"Mi nombre es: "<<nombre<<" y me gusta dormir "<<endl;
}
void persona::caminar(){
    cout<<"Mi nombre es: "<<nombre<<" y me gusta caminar "<<endl;
}
void persona::jugar(){
    cout<<"Mi nombre es: "<<nombre<<" y me gusta jugar "<<endl;
}

int main (){
    persona p1("Malena", 18, "contreras", 47665892);
    p1.caminar();
    p1.comer();
    p1.dormir();
    p1.jugar();
}