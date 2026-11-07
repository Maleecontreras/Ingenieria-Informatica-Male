#include <iostream>
using namespace std;
//ejercicio1
int main(){
    int numero, *pnumero;
    pnumero=&numero;

    cout<<"indique el numero "<<endl;
    cin>>numero;

    cout<<"el valor de numero es: "<<numero<<endl;
    cout<<"la direccion de memoria del numero es: "<<pnumero<<endl;
    cout<<"el valor del puntero desreferenciado es: "<<*pnumero<<endl;
}