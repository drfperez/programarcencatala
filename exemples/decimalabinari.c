#include "stdlibcat.h"

enter principal() {

    enter nombre;
    enter binari[32];
    enter i = 0, j;

    escriuref("CONVERSOR DE DECIMAL A BINARI\n");
    escriuref("-----------------------------\n");

    escriuref("Introdueix un nombre enter: ");
    llegirf("%d", &nombre);

    si (nombre == 0) {
        escriuref("Binari: 0\n");
        retorna 0;
    }

    mentre (nombre > 0) {
        binari[i] = nombre % 2;
        nombre = nombre / 2;
        i++;
    }

    escriuref("Binari: ");

    per (j = i - 1; j >= 0; j--) {
        escriuref("%d", binari[j]);
    }

    escriuref("\n");

    retorna 0;
}
