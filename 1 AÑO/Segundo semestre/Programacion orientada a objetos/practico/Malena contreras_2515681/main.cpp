#include "producto.h"
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