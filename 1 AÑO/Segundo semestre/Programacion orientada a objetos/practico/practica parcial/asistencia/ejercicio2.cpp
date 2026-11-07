#include "clases.h"

int main(){
    persona p1("Malena", 18);
    materia m1("programacion", 4589, 8);
    estudiante e1("Malena", 18, 2515681, m1);
    e1.mostrardatose();
    
}
