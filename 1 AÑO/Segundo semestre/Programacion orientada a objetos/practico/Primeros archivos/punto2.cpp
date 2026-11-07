#include <iostream>
using namespace std;

class punto{
    private:
    float x;
    float y;
    public:
    punto();
    punto(float, float);
    void setx(float);
    float getx();
    void sety(float);
    float gety();
    void mostrarpunto();
}; //primero clase punto y despues linea, osea primero la princilap y despues la que depende de esta. ahre

class linea{
    private:
        punto pi;
        punto pf;
    public:
    linea();
    linea(punto,punto);
    linea(float,float,float,float);
    void mostrarlinea();

};

linea::linea(){}
linea::linea(punto _pi, punto _pf){
    pi=_pi;
    pf=_pf;
}

linea::linea(float _x1, float _y1, float _x2, float _y2){
    pi.setx(_x1);
    pi.sety(_y1);
    pf.setx(_x2);
    pf.sety(_y2);
}

void linea::mostrarlinea(){
    cout<<"X1: "<<pi.getx()<<" Y1: "<<pi.gety()<<endl;
    cout<<"X2: "<<pf.getx()<<" Y2: "<<pf.gety()<<endl;
}

punto::punto(){
}
punto::punto(float _x, float _y){
    x=_x;
    y=_y;
}
void punto::setx(float _x){
    x=_x;
}
float punto::getx(){
    return x;
}
void punto::sety(float _y){
    y=_y;
}
float punto::gety(){
    return y;
}
void punto::mostrarpunto(){
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
}

int main(){
    punto p1(3,5);
    p1.mostrarpunto();
    punto p2(2,3);
    linea l1(p1,p2);
    l1.mostrarlinea();
}