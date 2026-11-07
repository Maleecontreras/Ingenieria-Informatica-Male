#include <iostream>
using namespace std;

class persona {
    private://atributos
    int base;
    int altura;
    public:
    persona(int, int);
    void perimetro();
    void superficie();
};

persona::persona(int _base, int _altura){//constructor que inicializa los atributos
    base=_base;
    altura=_altura;
}

void persona::superficie(){
    cout<<"la superficie es "<<altura*base<<endl;
}

void persona::perimetro(){
    cout<<"El perimetro es "<< 2*(base+altura)<<endl;
}

int main (){
    persona p1(50,40);
    p1.perimetro();
    p1.superficie();
}