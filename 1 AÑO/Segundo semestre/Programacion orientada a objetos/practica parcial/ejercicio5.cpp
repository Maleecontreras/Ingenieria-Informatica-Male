#include <iostream>
using namespace std;

class persona{
    private:
    string nombre;
    int edad, dni;
    public:
    persona();
    persona(string, int, int);
    void setnombre(string);
    string getnombre();
    void setedad(int);
    int getedad();
    void setdni(int);
    int getdni();
    void mostrarpersona();
};
class nota{
    private:
    int n;
    public:
    nota();
    nota(int);
    void setn(int);
    int getn();
    void mostrarnota();
};
class alumno:public persona{
    private:
    int lega;
    nota n1;
    public:
    alumno();
    alumno(string, int,int,int, nota);
    void setlega(int);
    int getlega();
    void mostraralumno();
};
persona::persona(){}
persona::persona(string _nombre, int _edad, int _dni){
    nombre=_nombre;
    edad=_edad;
    dni=_dni;
}
void persona::setnombre(string _nombre){
    nombre=_nombre;
}
string persona::getnombre(){
    return nombre;
}
void persona::setedad(int _edad){
    edad=_edad;
}
int persona::getedad(){
    return edad;
}
void persona::setdni(int _dni){
    dni=_dni;
}
int persona::getdni(){
    return dni;
}
void persona::mostrarpersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Dni: "<<dni<<endl;
}
nota::nota(){};
nota::nota(int _n){
    n=_n;
}
void nota::setn(int _n){
    n=_n;
}
int nota::getn(){
    return n;
}
void nota::mostrarnota(){
    cout<<"Nota: "<<n<<endl;
}
alumno::alumno(){}
alumno::alumno(string _nombre, int _edad, int _dni, int _lega, nota _n1):persona(_nombre,_edad,_dni){
    lega=_lega;
    n1=_n1;
}
void alumno::setlega(int _lega){
    lega=_lega;
}
int alumno::getlega(){
    return lega;
}
void alumno::mostraralumno(){
    mostrarpersona();
    n1.mostrarnota();
    cout<<"Legajo: "<<lega<<endl;
}
int main(){
    string n;
    int edad, dni,lega,no;
    cout<<"Ingrese el nombre del alumno: ";
    cin>>n;
    cout<<"Ingrese la edad del alumno: ";
    cin>>edad;
    cout<<"Ingrese el dni del alumno: ";
    cin>>dni;
    cout<<"Ingrese el legajo del alumno: ";
    cin>>lega;
    cout<<"Ingrese la nota del alumno: ";
    cin>>no;
    if(no>=6){
        cout<<"APROBADO"<<endl;
    }else{
        cout<<"REPROBO"<<endl;
    }
    nota n1(no);
    alumno a1(n,edad,dni,lega,n1);
    a1.mostraralumno();
}