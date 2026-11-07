#include <iostream>
using namespace std;

class persona {
    private:
    string nombre;
    int dni, edad;
    public:
    persona();
    persona(string, int, int);
    void setnombre(string);
    string getnombre();
    void setdni(int);
    int getdni();
    void setedad(int);
    int getedad();
    void mostrarpersona();
};
class compra{
    private:
    int monto, fecha;
    public:
    compra();
    compra(int, int);
    void mostrarcompra();
    void setmonto(int);
    int getmonto();
    void setfecha(int);
    int getfecha();
};
class cliente:public persona{
    private:
    int nro;
    string email;
    compra c1;
    public:
    cliente();
    cliente(string, int, int,int, string, compra);
    void setemail(string);
    string getemail();
    void setnro(int);
    int getnro();
    void mostrarcliente();
};
persona::persona(){}
persona::persona(string _nombre, int _dni, int _edad){
    nombre=_nombre;
    dni=_dni;
    edad=_edad;
}
void persona::setnombre(string _nombre){
    nombre=_nombre;
}
string persona::getnombre(){
    return nombre;
}
void persona::setdni(int _dni){
    dni=_dni;
}
int persona::getdni(){
    return dni;
}
void persona::setedad(int _edad){
    edad=_edad;
}
int persona::getedad(){
    return edad;
}
void persona::mostrarpersona(){
    cout<<"****************DATOS CLIENTE***************************"<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Dni: "<<dni<<endl;
    cout<<"Edad: "<<edad<<endl;
}
compra::compra(){}
compra::compra(int _monto, int _fecha){
    monto=_monto;
    fecha=_fecha;
}
void compra::setmonto(int _monto){
    monto=_monto;
}
int compra::getmonto(){
    return monto;
}
void compra::setfecha(int _fecha){
    fecha=_fecha;
}
int compra::getfecha(){
    return fecha;
}
void compra::mostrarcompra(){
    cout<<"Monto: "<<monto<<endl;
    cout<<"Fecha: "<<fecha<<endl;
}
cliente::cliente(){}
cliente::cliente(string _nombre, int _dni, int _edad,int _nro, string _email, compra _c1 ):persona(_nombre, _dni, _edad){
    nro=_nro;
    email=_email;
    c1=_c1;
}
void cliente::setnro(int _nro){
    nro=_nro;
}
int cliente::getnro(){
    return nro;
}
void cliente::setemail(string _email){
    email=_email;
}
string cliente::getemail(){
    return email;
}
void cliente::mostrarcliente(){
    mostrarpersona();
    c1.mostrarcompra();
    cout<<"Nrocliente: "<<nro<<endl;
    cout<<"Email: "<<email<<endl;
}
int main(){
    string nombre, email;
    int dni, edad, nro, monto, fecha;
    cout<<"Ingrese nombre: "<<endl;
    cin>>nombre;
    cout<<"Ingrese email: "<<endl;
    cin>>email;
    cout<<"Ingrese dni: "<<endl;
    cin>>dni;
    cout<<"Ingrese edad: "<<endl;
    cin>>edad;
    cout<<"Ingrese nrocliente: "<<endl;
    cin>>nro;
    cout<<"Ingrese monto: "<<endl;
    cin>>monto;
    cout<<"Ingrese fecha: "<<endl;
    cin>>fecha;
    if(monto>100000){
        monto=monto-monto*0.10;
    }
    compra co(monto, fecha);
    cliente cl1(nombre, dni,edad,nro, email, co);
    cl1.mostrarcliente();
}