#include <iostream>
using namespace std;
//ejercicio2
int main(){
    int numero, *pnumero;
    pnumero=&numero;

    cout<<"indique el numero "<<endl;
    cin>>numero;
    if(numero%2==0){
        cout<<"el numero es par "<<endl;
        cout<<"la direccion de memoria del numero es: "<<pnumero<<endl;
    }else{
        cout<<"el numero es impar"<<endl;
        cout<<"la direccion de memoria del numero es: "<<pnumero<<endl;
    }
}