#include <iostream>
using namespace std;
//actividad 1
struct persona{
    string nombre;
    float nota;
};

string mayor(persona x[5]){
    int i;
    int ca=0;
    string no;
    for(i=0; i<5; i++){
        if(x[i].nota>ca){
            ca=x[i].nota;
            no=x[i].nombre;
        }
    }
    return no;
};

string menor(persona x[5]){
    int i;
    int ca=x[1].nota;
    string me;
    for(i=0; i<5; i++){
        if(x[i].nota<ca){
            ca=x[i].nota;
            me=x[i].nombre;
        }
    }
    return me;
};

float promedio(persona x[5]){
    int i;
    float suma=0, pro;
    for(i=0;i<5; i++){
        suma=suma+x[i].nota;
    }

    pro=suma/5;

    return pro;
};


int main(){
    persona A[5];
    int i;
    for(i=0; i<5; i++){
        cout<<"ingrese el nombre del alumno " <<i+1<<endl;
        cin>>A[i].nombre;
        cout<<"Ingrese la nota del alumno "<<i+1<<endl;
        cin>>A[i].nota;
    }
    cout<<"El promedio de las notas de los alumnos es "<<promedio(A)<<endl;
    cout<<"El nombre del alumno con menor calificacion es "<<menor(A)<<endl;
    cout<<"El nombre del alumno con mayor calificacion es "<<mayor(A)<<endl;

    return 0;
}
