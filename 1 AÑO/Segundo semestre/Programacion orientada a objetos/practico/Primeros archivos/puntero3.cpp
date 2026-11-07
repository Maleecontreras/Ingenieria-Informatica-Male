#include <iostream>
using namespace std;
//ejercicio3

int primo(int *pnumero){
    int i;
    for(i=2; i<*pnumero; i++){
        if(*pnumero%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){
    int numero, *pnumero;
    pnumero=&numero;

    cout<<"indique el numero "<<endl;
    cin>>numero;
    if(primo(pnumero)==0){
        cout<<"El numero no es primo"<<endl;
    }else{
        cout<<"El numero es primo"<<endl;
    }
}