#include "stdlibcat.h"

enter principal() {

    enter nombre_secret, intent, intents = 0;

    llavor_aleatòria(temps_actual(NUL));
    nombre_secret = genera_aleatori() % 100 + 1;

    escriuref("=================================\n");
    escriuref("   JOC D'ENDEVINAR EL NOMBRE\n");
    escriuref("=================================\n");

    fes {
        escriuref("Introdueix un nombre (1-100): ");
        llegirf("%d", &intent);

        intents++;

        si (intent < nombre_secret) {
            escriuref("Massa petit!\n");
        }
        sino si (intent > nombre_secret) {
            escriuref("Massa gran!\n");
        }
        sino {
            escriuref("\n🎉 Has encertat!\n");
            escriuref("Has necessitat %d intents.\n", intents);
        }

    } fins (intent != nombre_secret);

    retorna 0;
}
