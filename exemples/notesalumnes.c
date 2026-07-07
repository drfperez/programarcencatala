#include "stdlibcat.h"

enter principal() {

    enter nombre_alumnes, i;
    real notes[100];
    real suma = 0, mitjana;
    real maxima, minima;

    escriuref("Quants alumnes hi ha? ");
    llegirf("%d", &nombre_alumnes);

    si (nombre_alumnes <= 0 o nombre_alumnes > 100) {
        escriuref("Nombre d'alumnes no vàlid.\n");
        retorna 0;
    }

    per (i = 0; i < nombre_alumnes; i++) {

        escriuref("Nota de l'alumne %d: ", i + 1);
        llegirf("%f", &notes[i]);

        suma += notes[i];

        si (i == 0) {
            maxima = notes[i];
            minima = notes[i];
        }

        si (notes[i] > maxima)
            maxima = notes[i];

        si (notes[i] < minima)
            minima = notes[i];
    }

    mitjana = suma / nombre_alumnes;

    escriuref("\n========== RESULTATS ==========\n");
    escriuref("Mitjana: %.2f\n", mitjana);
    escriuref("Nota més alta: %.2f\n", maxima);
    escriuref("Nota més baixa: %.2f\n", minima);

    escriuref("\nAlumnes aprovats:\n");

    per (i = 0; i < nombre_alumnes; i++) {
        si (notes[i] >= 5.0) {
            escriuref("Alumne %d -> %.2f\n", i + 1, notes[i]);
        }
    }

    retorna 0;
}
