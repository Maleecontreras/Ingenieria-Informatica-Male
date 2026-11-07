#include <iostream>
using namespace std;

class bateria {
    private:
    string codigo;
    int capacidad;
    int año;
    public:
    bateria();
    bateria(string, int, int);
    void setcodigo(string);
    string getcodigo();
    void setcapacidad(int);
    int getcapacidad();
    void setaño(int);
    int getaño();
    void mostrardatosb();
};

class celular{
    private:
    string marca;
    string modelo;
    int año;
    bateria b1;
    public:
    celular();
    celular(string, string, int, bateria);
    void setmarca(string);
    string getmarca();
    void setmodelo(string);
    string getmodelo();
    void setaño(int);
    int getaño();
    void mostrardatosc();
};