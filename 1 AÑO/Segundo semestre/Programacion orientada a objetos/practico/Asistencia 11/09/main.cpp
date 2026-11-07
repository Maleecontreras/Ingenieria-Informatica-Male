#include "clases.h"
int main(){
    persona p1("male", "contreras", 18);
    estudiante e1("ana", "lopez", 20, 4.5, "sistemas", 2);
    profesor pr1("juan", "perez", 40, 1500.50);
    titular t1("maria", "gomez", 50, 2000.75, 12345);
    pase ps1("luis", "martinez", 22, 4.8, 67890);
    p1.mostrardatos();
    e1.mostrardatosestudiante();
    pr1.mostrardatosprofesor();
    t1.mostrardatostitular();
    ps1.mostrardatospase();
}