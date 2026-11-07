#include <iostream>
using namespace std;

class Rectangulo{
    private:
        int base;
        int altura;
    public:
        void setaltura(int a);//solo se declaran
        void setbase (int b);//permiten meter datos dentro de otros. Para sacar datos de los atributos usamos int getaltura()
        int perimetro();
        int superficie();
        int getaltura();//para definirla int Rectangulo::getaltura(){return altura;}
        int getbase();
};

void Rectangulo::setaltura(int a){
    altura=a;
};

void Rectangulo::setbase(int b){
    base=b;
};
int Rectangulo::superficie(){
    return altura*base;
};
int Rectangulo::perimetro(){
    return 2*(base+altura);
};

int main (){
    Rectangulo r;
    r.setaltura(7);
    r.setbase(5);
    cout<<r.superficie()<<endl;
    cout<<r.perimetro();
}