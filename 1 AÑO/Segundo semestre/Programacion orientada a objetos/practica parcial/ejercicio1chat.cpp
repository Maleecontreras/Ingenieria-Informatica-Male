#include <iostream>
using namespace std;

class persona {
    private:
    string nombre;
    int edad, dni;
    public:
    persona();
    persona(string, int, int);
    void setnombre(string);
    string getnombre();
    void setedad(int);
    int getedad();
    void setdni(int);
    int getdni();
    void mostrarpersona();
};
