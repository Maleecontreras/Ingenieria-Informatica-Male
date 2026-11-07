#include <iostream>
using namespace std;

void menorMayor(int A[], int n){
    int *pA; 
    int *pMenor, *pMayor;

    pA = &A[0];    
    pMenor = pA;     
    pMayor = pA;     

    for(int i = 0; i < n; i++){
        if(*pA < *pMenor){
            pMenor = pA;
        }
        if(*pA > *pMayor){
            pMayor = pA;
        }
        pA++; 
    }

    cout << "El menor elemento es: " << *pMenor << " en la direccion: " << pMenor << endl;
    cout << "El mayor elemento es: " << *pMayor << " en la direccion: " << pMayor << endl;
}

int main(){
    int A[10];

    for(int i = 0; i < 10; i++){
        cout << "Ingrese el valor en la pos " << i+1 << ": ";
        cin >> A[i];
    }

    menorMayor(A, 10);

    return 0;
}
