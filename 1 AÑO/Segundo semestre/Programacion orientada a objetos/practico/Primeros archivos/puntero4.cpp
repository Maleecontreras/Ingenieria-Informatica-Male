#include <iostream>
using namespace std;
int main(){

int A[10], *pA;

for(int i = 1; i < 10; i++){
    cout<<"Ingrese el valor en la poss: "<<i<<endl;
    cin>>A[i];
}


pA=&A[0]; //pA=A; es lo mismo

for(int i = 0; i < 10; i++){

    if(*pA%2==0){

        cout<<"La poss: "<<i<<" El elemento es par"<<endl;
        cout<<"Y su sireccion de memoria es: "<<pA<<endl;


    }else{
        cout<<"La poss: "<<i<<" El elemento es impar"<<endl;
        cout<<"Y su sireccion de memoria es: "<<pA<<endl;

    }
    pA++;
   
}
}