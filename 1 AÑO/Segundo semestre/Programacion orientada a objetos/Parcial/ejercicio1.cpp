#include <iostream>
using namespace std;

class animal{
    private:
    string nombre;
    int edad;
    public:
    animal();
    animal(string, int);
    void setnombre(string);
    string getnombre();
    void setedad(int);
    int getedad();
    void mostrarani();
};
class vacuna{
    private:
    int fecha;
    string nombrev;
    public:
    vacuna();
    vacuna(int, string);
    void setnombrev(string);
    string getnombrev();
    void setfecha(int);
    int getfecha();
    void mostrarva();
};
class collar{
    private:
    string material;
    int dia;
    public:
    collar();
    collar(string, int);
    void setmaterial(string);
    string getmaterial();
    void setdia(int);
    int getdia();
    void mostrarcollar();
};
class perro:public animal{
    private:
    int tama;
    string raza;
    vacuna v1;
    collar c1;
    public:
    perro();
    perro(string, int, int, string, vacuna, collar);
    void setraza(string);
    string getraza();
    void settama(int);
    int gettama();
    void mostrarperro();
};

animal::animal(){}
animal::animal(string _nombre, int _edad){
    nombre=_nombre;
    edad=_edad;
}

void animal::setnombre(string _nombre){
    nombre=_nombre;
}
string animal::getnombre(){
    return nombre;
}
void animal::setedad(int _edad){
    edad=_edad;
}
int animal::getedad(){
    return edad;
}
void animal::mostrarani(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}
vacuna::vacuna(){}
vacuna::vacuna(int _fecha, string _nombrev){
    fecha=_fecha;
    nombrev=_nombrev;
}
void vacuna::setfecha(int _fecha){
    fecha=_fecha;
}
int vacuna::getfecha(){
    return fecha;
}
void vacuna::setnombrev(string _nombrev){
    nombrev=_nombrev;
}
string vacuna::getnombrev(){
    return nombrev;
}
void vacuna::mostrarva(){
    cout<<"Fecha: "<<fecha<<endl;
    cout<<"Nombre: "<<nombrev<<endl;
}
collar::collar(){}
collar::collar(string _material, int _dia){
    material=_material;
    dia=_dia;
}
void collar::setmaterial(string _material){
    material=_material;
}
string collar::getmaterial(){
    return material;
}
void collar::setdia(int _dia){
    dia=_dia;
}
int collar::getdia(){
    return dia;
}
void collar::mostrarcollar(){
    cout<<"Material: "<<material<<endl;
    cout<<"Diametro: "<<dia<<endl;
}
perro::perro(){}
perro::perro(string _nombre, int _edad, int _tama, string _raza, vacuna _v1, collar _c1):animal(_nombre, _edad){
    tama=_tama;
    raza=_raza;
    v1=_v1;
    c1=_c1;
}
void perro::settama(int _tama){
    tama=_tama;
}
int perro::gettama(){
    return tama;
}
void perro::setraza(string _raza){
    raza=_raza;
}
string perro::getraza(){
    return raza;
}
void perro::mostrarperro(){
    cout<<"*****DATOS PERRO******"<<endl;
    mostrarani();
    cout<<"Tamaño: "<<tama<<endl;
    cout<<"Raza: "<<raza<<endl;
    cout<<"*****DATOS VACUNA*******"<<endl;
    v1.mostrarva();
    cout<<"*****DATOS COLLAR*******"<<endl;
    c1.mostrarcollar();
}
int main(){
    string nombre, nombrev, material, raza;
    int edad, fecha, dia, tama;
    cout<<"Ingrese nombre del animal: "<<endl;
    cin>>nombre;
    cout<<"Ingrese edad del animal: "<<endl;
    cin>>edad;
    cout<<"Ingrese tamanio del perro: "<<endl;
    cin>>tama;
    cout<<"Ingrese raza del perro: "<<endl;
    cin>>raza;
    cout<<"Ingrese nombre de la vacuna: "<<endl;
    cin>>nombrev;
    cout<<"Ingrese fecha de la vacuna: "<<endl;
    cin>>fecha;
    cout<<"Ingrese material del collar: "<<endl;
    cin>>material;
    cout<<"Ingrese diametro del collar: "<<endl;
    cin>>dia;
    vacuna v1(fecha, nombrev);
    collar c1(material, dia);
    perro p1(nombre, edad, tama, raza, v1, c1);
    p1.mostrarperro();
}