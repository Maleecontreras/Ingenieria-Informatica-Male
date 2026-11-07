#include <iostream>
using namespace std;

class empleado{
    private:
    string nombre;
    int dni, sueldo;
    public:
    empleado();
    empleado(string, int, int);
    void setnombre(string);
    string getnombre();
    void setdni(int);
    int getdni();
    void setsueldo(int);
    int getsueldo();
    virtual void mostrardatos();
};
class gerente: public empleado{
    private:
    string area;
    public:
    gerente();
    gerente(string, int, int, string);
    void setarea(string);
    string getarea();
    void mostrardatos();
};
class supervisor: public empleado{
    private:
    string sector;
    public:
    supervisor();
    supervisor(string, int, int, string);
    void setsector(string);
    string getsector();
    void mostrardatos();
};
class obrero:public empleado{
    private:
    string fabrica;
    public:
    obrero();
    obrero(string, int, int, string);
    void setfabrica(string);
    string getfabrica();
    void mostrardatos();
};