#include "clases1.h"
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