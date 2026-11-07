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

producto::producto(){};

void producto::setnombre(string _nombre){
    nombre=_nombre;
}
string producto::getnombre(){
    return nombre;
}

void producto::setprecio(int _precio){
    precio=_precio;
}
float producto::getprecio(){
    if(precio<10000 && precio>5000){
        return precio*0.90;
    }else{
        return precio;
    }
}

void producto::setstock(int _stock){
    stock=_stock;
}
int producto::getstock(){
    return stock-1;
}

void producto::infousuario(){
    cout<<"El nombre del producto es "<<nombre<<endl;
    cout<<"El precio del producto con descuento es "<<getprecio()<<endl;
    cout<<"la cantidad de stock restante es "<<getstock()<<endl;
}

int main(){
    producto p;
    int i, s;
    p.setnombre("Coca");
    cout<<"Cual es el stock del producto? "<<endl;
    cin>>s;
    p.setstock(s);
    cout<<"Ingrese el precio del producto "<<endl;
    cin>>i;
    p.setprecio(i);
    p.infousuario();
}