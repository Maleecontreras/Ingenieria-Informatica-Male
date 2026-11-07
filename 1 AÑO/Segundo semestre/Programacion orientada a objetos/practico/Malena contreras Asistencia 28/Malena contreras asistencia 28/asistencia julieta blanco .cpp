#include <iostream>
#include <string>
using namespace std;

int main() {
    string ucc, nombre;
    float nota1, nota2, nota3, notaFinal;

  
    cout << "Ingrese la clave UCC: ";
    cin >> ucc;
    cout << "Ingrese el nombre del alumno: ";
    cin.ignore(); 
    getline(cin, nombre);

    cout << "Ingrese la nota del parcial 1: ";
    cin >> nota1;
    cout << "Ingrese la nota del parcial 2: ";
    cin >> nota2;
    cout << "Ingrese la nota del parcial 3: ";
    cin >> nota3;

   
    notaFinal = (nota1 + nota2 + nota3) / 3.0;

    
    cout << "\n--- Resultado ---" << endl;
    cout << "Clave UCC: " << ucc << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Nota Final: " << notaFinal << endl;

    if (notaFinal >= 4) {
        cout << "El alumno APROBO la asignatura." << endl;
    } else {
        cout << "El alumno NO APROBO la asignatura." << endl;
    }

    return 0;
}

