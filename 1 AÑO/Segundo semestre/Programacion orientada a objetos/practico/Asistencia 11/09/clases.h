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
    string carrera;
    int año;
    public:
    estudiante();
    estudiante(string,string,int,float, string, int);
    void mostrardatosestudiante();
};
class profesor:public persona{
    private:
    float sueldo;
    string carrera;
    int horas;
    public:
    profesor();
    profesor(string,string,int,float);
    void mostrardatosprofesor();
};
class titular:public profesor{
    private:
    int codigo;
    public:
    titular();
    titular(string, string, int,float,int);
    void mostrardatostitular();
};
class pase:public estudiante{
    private:
    int codigo;
    public:
    pase();
    pase(string, string, int,float,int);
    void mostrardatospase();
};