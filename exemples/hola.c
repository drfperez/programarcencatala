#include "../stdlibcat.h"

funció enter principal(buit) {
    enter edat = 25;
    real altura = 1.75;

    escriuref("Benvingut al C en català!\n");
    escriuref("Edat: %d anys, Altura: %.2f m\n", edat, altura);

    si (edat >= 18) {
        escriuref("Ets major d'edat.\n");
    } sino {
        escriuref("Ets menor d'edat.\n");
    }

    per (enter j = 0; j < 5; j++) {
        escriuref("Iteració %d\n", j);
    }

    retorna 0;
}
