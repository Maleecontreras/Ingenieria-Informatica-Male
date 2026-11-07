#include <iostream>
using namespace std;

//pilomorfismo si o si con herencia y punteros.

class persona{
    private:
    string nombre;
    int edad;
    public:
    persona();
    persona(string, int);
    virtual void mostrardatos();
};
class profesor: public persona{
    private:
    string materia;
    public:
    profesor();
    profesor(string, int, string);
    void mostrardatos();
};
class alumno: public persona{
    private:
    long claveucc;
    public:
    alumno();
    alumno(string, int, long);
    void mostrardatos();//aplica 
};
persona::persona(){}
persona::persona(string _nombre, int _edad){
    nombre=_nombre;
    edad=_edad;
}
void persona::mostrardatos(){
    cout<<"Los datos de la persona son: "<<endl;
    cout<<"Nombre: "<<nombre<<" Edad: "<<edad<<endl;
}
profesor::profesor(){}
profesor::profesor(string _nombre, int _edad, string _materia):persona(_nombre, _edad){
    materia=_materia;
}
void profesor::mostrardatos(){
    persona::mostrardatos();
    cout<<"Materia: "<<materia<<endl;
}
alumno::alumno(){}
alumno::alumno(string _nombre, int _edad,long _claveucc):persona(_nombre, _edad){
    claveucc=_claveucc;
}
void alumno::mostrardatos(){
    persona::mostrardatos();
    cout<<"Clave ucc: "<<claveucc<<endl;
}
int main(){
    //persona *A=new persona("carlos",29 );//como es puntero de persona, puede apuntar a las clases que heredan de ella. Con new persona hacemos que apunte a esa clase.
    //A->mostrardatos();//flecha hace que muestre el puntero.
    //A=new alumno("Nombre",19,2515681);
    //A->mostrardatos();
    persona *A[3];
    A[0]=new persona("maria", 33);
    A[1]=new profesor("maria", 33, "fisica");
    A[2]=new alumno("jose", 23, 2515681);
    for(int i=0; i<3; i++){
        A[i]->mostrardatos();
    }
}