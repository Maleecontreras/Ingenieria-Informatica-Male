#include <iostream>
using namespace std;

//void imprimir (int x){
//   cout<<x<<endl;
//}
// void imprimir (string x){
   //  cout<<x<<endl;
// }
// int main(){
//     imprimir("hola mundo");//para corregir esto lo hacemo con la sobre carga de funciones, ahora funciona porque agregamos el segundo void imprimir. Para evitar la sobre caraga de funciones, usamos los template. Template te premite crear tus propios tipos de datos.
// }
template <class dato>
void imprimir (dato x){
    cout<<x;
}
int main (){
    imprimir("hola mundo");//agarra lo que le mandas y lo asocia a un tipo de dato.
}
/*
template <class dato, class dato2>
void imprimir (dato x, dato2 y){
    cout<<x+y;
}
int main (){
    imprimir(5,6);
}
*/