#include <iostream>
using namespace std;
//actividad 2
struct cancion{
    string artista, titulo;
    int duracion;
    int tamaño;
};



void menu(){
    cout<<"~~~~~~~~~~~~~~Menu~~~~~~~~~~~~~~~ "<<endl;
    cout<<"1 -> Agregar una cancion"<<endl;
    cout<<"2 -> Mostrar el titulo de todas las canciones"<<endl;
    cout<<"3 -> Buscar cancion"<<endl;
    cout<<"4-> SALIR DEL MENU "<<endl;
}

int verificar (cancion x[10], string ar, string ti){
    int i;
    for(i=0; i<10; i++){
        if(x[i].artista==ar && x[i].titulo==ti){
            return 1;
        }
    }
    return 0;
}

void ingresarc(cancion x[10], int &pos){//si no le agrego & no guarda el cambio que se hizo en la posicion.
    string ar;
    string ti;
    cout<<"ingrese el artista de la cancion "<<pos+1<<endl;
    cin>>x[pos].artista;
    cout<<"ingrese el titulo de la cancion "<<pos+1<<endl;
    cin>>x[pos].titulo;

    if(verificar(x,ar,ti)==0){
        x[pos].artista=ar;
        x[pos].titulo=ti;
        cout<<"ingrese la duracion de la cancion "<<pos+1<<endl;
        cin>>x[pos].duracion;
        cout<<"ingrese el tamaño del fichero de la cancion "<<pos+1<<endl;
        cin>>x[pos].tamaño;
    }else{
        cout<<"La cancion ya esta agregada "<<endl;
    }
    
}

int main(){
    int pos=0, a,i;
    int respuesta;
    cancion A[10];
    do{

        menu();
        cin>>respuesta;

        switch(respuesta){
            case 1:
                break;

            case 2:

                break;

            case 3:

                break;
        }

    }while(respuesta!=4);
}