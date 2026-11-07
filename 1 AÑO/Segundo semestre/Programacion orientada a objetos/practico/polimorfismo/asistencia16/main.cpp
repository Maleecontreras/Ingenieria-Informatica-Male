#include "clases.h"
int main(){
    empleado *A[4];
    A[0]=new empleado("maria", 665892, 50);
    A[1]=new gerente("ma", 65892, 80, "Administrativo");
    A[2]=new supervisor("mara", 65892, 90, "Gerencia");
    A[3]=new supervisor("mia", 892, 100, "samsung");
    for(int i=0; i<4; i++){
        A[i]->mostrardatos();
    }
}