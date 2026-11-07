#include <iostream>
using namespace std;

class persona{
    private:
    string nombrep;
    int edad;
    public:
    persona();
    persona(string, int);
    void mostrardatosp();
    void setnombrep(string);
    string getnombrep();
    void setedad(int);
    int getedad();
};

class materia{
    private:
    string nombrem;
    int codigo, nota;
    public:
    materia();
    materia(string, int, int);
    void mostrardatosm();
    void setnombrem(string);
    string getnombrem();
    void setcodigo(int);
    int getcodigo();
    void setnota(int);
    int getnota();
};

class estudiante: public persona{//hereda los atributos de la editorial.
    private:
    int clave;
    materia a1;//autor compone al libro.
    public:
    estudiante();
    estudiante(string, int ,int, materia);
    void mostrardatose();
    void setclave(int);
    int getclave();
};