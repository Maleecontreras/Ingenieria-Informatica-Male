#include <iostream>
using namespace std;

class cliente{
    private:
    string nombre;
    int edad;
    public:
    cliente();
    cliente(string, int);
    void setnombre(string);
    string getnombre();
    void setedad(int);
    int getedad();
    void mostrarcliente();
};
class entrada{
    private:
    string pelicula;
    int precio;
    public:
    entrada();
    entrada(string, int);
    void setpelicula(string);
    string getpelicula();
    void setprecio(int);
    int getprecio();
    void mostrarentrada();
};
class compra{
    private:
    int cantidad, total;
    cliente c1;
    entrada e1;
    public:
    compra();
    compra(int, int, cliente, entrada);
    void setcantidad(int);
    int getcantidad();
    void settotal(int);
    int gettotal();
    void mostrarcompra();
};
cliente::cliente(){}
cliente::cliente(string _nombre, int _edad){
    nombre=_nombre;
    edad=_edad;
}
void cliente::setnombre(string _nombre){
    nombre=_nombre;
}
string cliente::getnombre(){
    return nombre;
}
void cliente::setedad(int _edad){
    edad=_edad;
}
int cliente::getedad(){
    return edad;
}
void cliente::mostrarcliente(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
entrada::entrada(){}
entrada::entrada(string _pelicula, int _precio){
    pelicula=_pelicula;
    precio=_precio;
}
void entrada::setpelicula(string _pelicula){
    pelicula=_pelicula;
}
string entrada::getpelicula(){
    return pelicula;
}
void entrada::setprecio(int _precio){
    precio=_precio;
}
int entrada::getprecio(){
    return precio;
}
void entrada::mostrarentrada(){
    cout<<"****************ENTRADA REALIZADA********************"<<endl;
    cout<<"Pelicula: "<<pelicula<<endl;
    cout<<"Precio: "<<precio<<endl;
}
compra::compra(){}
compra::compra(int _cantidad, int _total, cliente _c1, entrada _e1){
    cantidad=_cantidad;
    total=_total;
    c1=_c1;
    e1=_e1;
}
void compra::setcantidad(int _cantidad){
    cantidad=_cantidad;
}
int compra::getcantidad(){
    return cantidad;
}
void compra::settotal(int _total){
    total=_total;
}
int compra::gettotal(){
    return total;
}
void compra::mostrarcompra(){
    c1.mostrarcliente();
    e1.mostrarentrada();
    cout<<"Cantidad de entradas: "<<cantidad<<endl;
    cout<<"Total con descuentos: "<<total<<endl;
}
int main(){
    string nombre, pelicula;
    int edad, precio, cantidad, total;
    cout<<"Ingrese nombre: ";
    cin>>nombre;
    cout<<"Ingrese edad: ";
    cin>>edad;
    cout<<"Ingrese la pelicula: ";
    cin>>pelicula;
    cout<<"Ingrese el precio: ";
    cin>>precio;
    cout<<"Ingrese cantidad: ";
    cin>>cantidad;
    total=cantidad*precio;
    if (edad<12){
        total=total-total*0.50;
    }
    if (edad>60){
        total=total-total*0.30;
    }
    cliente c1(nombre, edad);
    entrada e1(pelicula, precio);
    compra co1(cantidad, total, c1, e1);
    co1.mostrarcompra();
}