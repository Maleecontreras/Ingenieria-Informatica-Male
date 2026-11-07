#include <iostream>
using namespace std;

class usuario{
    private:
    string nombre, apellido, login, clave;
    public:
    usuario(string, string,string, string);
    usuario();//constructor por defecto
    void setnombre(string);
    string getnombre();
    void setapellido(string);
    string getapellido();
    void setlogin(string);
    string getlogin();
    void setclave(string);
    string getclave();
    void infousuario();
};

usuario::usuario(){}
usuario::usuario(string _nombre, string _apellido, string _login, string _clave){
    nombre=_nombre;
    apellido=_apellido;
    login=_login;
    clave=_clave;
}

void usuario::setnombre(string _nombre){
    nombre=_nombre;
}
string usuario::getnombre(){
    return nombre;
}
void usuario::setapellido(string _apellido){
    apellido=_apellido;
}
string usuario::getapellido(){
    return apellido;
}

void usuario::setlogin(string _login){
    login=_login;
}
string usuario::getlogin(){
    return login;
}

void usuario::setclave(string _clave){
    clave=_clave;
}
string usuario::getclave(){
    return clave;
}

void usuario::infousuario(){
    cout<<"*********informacion del usuario*********"<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"Login: "<<login<<endl;
    cout<<"Clave: "<<clave<<endl;
}

int main (){
    usuario u1;
    usuario u2("Juan", "Perez", "jperez", "54321");
    u2.infousuario();
    u1.setnombre("Malena");
    u1.setapellido("Contreras");
    u1.setlogin("Malu");
    u1.setclave("12345");
    u1.infousuario();
}