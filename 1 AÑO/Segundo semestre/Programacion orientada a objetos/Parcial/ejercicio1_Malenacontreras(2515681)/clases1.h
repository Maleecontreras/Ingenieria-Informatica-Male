#include <iostream>
using namespace std;

class animal{
    private:
    string nombre;
    int edad;
    public:
    animal();
    animal(string, int);
    void setnombre(string);
    string getnombre();
    void setedad(int);
    int getedad();
    void mostrarani();
};
class vacuna{
    private:
    int fecha;
    string nombrev;
    public:
    vacuna();
    vacuna(int, string);
    void setnombrev(string);
    string getnombrev();
    void setfecha(int);
    int getfecha();
    void mostrarva();
};
class collar{
    private:
    string material;
    int dia;
    public:
    collar();
    collar(string, int);
    void setmaterial(string);
    string getmaterial();
    void setdia(int);
    int getdia();
    void mostrarcollar();
};
class perro:public animal{
    private:
    int tama;
    string raza;
    vacuna v1;
    collar c1;
    public:
    perro();
    perro(string, int, int, string, vacuna, collar);
    void setraza(string);
    string getraza();
    void settama(int);
    int gettama();
    void mostrarperro();
};