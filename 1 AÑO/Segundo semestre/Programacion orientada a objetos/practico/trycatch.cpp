#include <iostream>
using namespace std;

int validarnumero(string entrada){//string porq acepta cualquier valor

    try
    {

        stoi(entrada);//revisa los caracteres de la variable y verifica que sean numeros y no letras

        return 1; //si da bien porque son numeros va a retornar 1 y sino (algo sale mal) enytra en el cash donde retoprnaria 0
}
    catch(...)
    {
        return 0;
    }
}

int main (){

    string entrada;
    int nn=0;
    int numero;

    while (nn==0)
    {

        cout<<"Indique el numero: "<<endl;
        cin>>entrada;

        nn=validarnumero(entrada);
    }

    numero=stoi(entrada);

    cout<<"El numero es:"<<numero<<endl;
}
