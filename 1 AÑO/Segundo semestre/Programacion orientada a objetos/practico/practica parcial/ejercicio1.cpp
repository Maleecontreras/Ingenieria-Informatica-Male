#include <iostream>
using namespace std;

class editorial{
    private:
    string nombree;
    public:
    editorial();
    editorial(string);
    void mostrardatose();
    void setnombree(string);
    string getnombree();
};

class autor{
    private:
    string nombrea;
    int dni;
    public:
    autor();
    autor(string, int);
    void mostrardatosa();
    void setnombrea(string);
    string getnombrea();
    void setdni(int);
    int getdni();
};

class libro: public editorial{//hereda los atributos de la editorial.
    private:
    string nombrel;
    autor a1;//autor compone al libro.
    public:
    libro();
    libro(string, string, autor);
    void mostrardatosl();
    void setnombrel(string);
    string getnombrel();
};
//************/
editorial::editorial(){};
editorial::editorial(string _nombree){
    nombree=_nombree;
}
void editorial::setnombree(string _nombree){
    nombree=_nombree;
}
string editorial::getnombree(){
    return nombree;
}
void editorial::mostrardatose(){
    cout<<"Nombre de la editorial: "<<nombree<<endl;
}
autor::autor(){}
autor::autor(string _nombrea, int _dni){
    nombrea=_nombrea;
    dni=_dni;
}
void autor::setnombrea(string _nombrea){
    nombrea=_nombrea;
}
string autor::getnombrea(){
    return nombrea;
}
void autor::setdni(int _dni){
    dni=_dni;
}
int autor::getdni(){
    return dni;
}
void autor::mostrardatosa(){
    cout<<"Nombre del autor: "<<nombrea<<endl;
    cout<<"Dni del autor: "<<dni<<endl;
}
libro::libro(){}
libro::libro(string _nombree, string _nombrel, autor _a1): editorial(_nombree){
    nombrel=_nombrel;
    a1=_a1;
}
void libro::setnombrel(string _nombrel){
    nombrel=_nombrel;
}
string libro::getnombrel(){
    return nombrel;
}
void libro::mostrardatosl(){
    mostrardatose();
    cout<<"Nombre del libro: "<<nombrel<<endl;
    a1.mostrardatosa();//para mostrar los datos de la funcion que compone.
}
int main(){
    autor a2("Malena", 47665892);
    libro l1("editorialM", "Billie eilish", a2);
    l1.mostrardatosl();
}
