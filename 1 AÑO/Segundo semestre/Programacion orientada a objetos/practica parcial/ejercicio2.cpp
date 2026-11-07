#include <iostream>
using namespace std;

class persona{
    private:
    string nombre, sexo;
    int edad, dni;
    float peso, altura;
    public:
    persona();
    persona(string, string, int, int, float, float);
    void setnombre(string);
    string getnombre();
    void setsexo(string);
    string getsexo();
    void setedad(int);
    int getedad();
    void setpeso(float);
    float getpeso();
    void setaltura(float);
    float getaltura();
    int calcularIMC();
    bool esmayor();
    void comprobar();
    void generardni();
};
persona::persona(){}
persona::persona(string _nombre, string _sexo, int _edad, int _dni, float _peso, float _altura){
    nombre=_nombre;
    sexo=_sexo;
    edad=_edad;
    dni=_dni;
    peso=_peso;
    altura=_altura;
}
int persona::calcularIMC(){
    float imc=peso/altura*altura;
    if(peso/altura*altura<20){
        return -1;
    }else if(imc>=20 && imc<=25){
        return 0;
    }else{
        return 1;
    }
}
bool persona::esmayor(){
}
