#include <iostream>
using namespace std;

class electro{
    private:
    string marca;
    int anio;
    public:
    electro();
    electro(string, int);
    void setmarca(string);
    string getmarca();
    void setanio(int);
    int getanio();
    void mostrarelectro();

};
class bateria{
    private:
    float duracion, voltaje, ampe;
    public:
    bateria();
    bateria(float, float,float);
    void setduracion(float);
    float getduracion();
    void setvoltaje(float);
    float getvoltaje();
    void setamp(float);
    float getamp();
    void mostrarbateria();

};
class celular:public electro{
    private:
    string modelo, codigo;
    int nchip;
    bateria b1;
    public:
    celular();
    celular(string, int, string, string, int, bateria);
    void setmodelo(string);
    string getmodelo();
    void setcodigo(string);
    string getcodigo();
    void setnchip(int);
    int getnchip();
    void mostrarcelular();
};
