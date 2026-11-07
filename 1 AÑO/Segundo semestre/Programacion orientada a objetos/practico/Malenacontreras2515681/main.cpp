#include "clases.h"

int main() {
    bateria b1("BAT123", 5000, 2024);
    celular c1("Samsung", "Galaxy S25", 2025, b1);

    c1.mostrardatosc();

    return 0;
}