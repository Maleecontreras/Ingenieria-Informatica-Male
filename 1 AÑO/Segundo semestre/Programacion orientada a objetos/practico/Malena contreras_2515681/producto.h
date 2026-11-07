#include <iostream>
using namespace std;

class producto{
    private:
    float precio;
    int stock;
    string nombre;
    public:
    producto();
    void infousuario();
    void setprecio(int);
    float getprecio();
    void setstock(int);
    int getstock();
    void setnombre(string);
    string getnombre();
};