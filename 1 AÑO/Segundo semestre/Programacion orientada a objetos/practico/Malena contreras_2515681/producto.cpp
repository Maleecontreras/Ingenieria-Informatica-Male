#include "producto.h"

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
        return precio*0.88;
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