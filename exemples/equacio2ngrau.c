#include "stdlibcat.h"

enter principal() {
    doble a, b, c;
    doble discriminant, x1, x2;

    escriuref("Resolució d'una equació de segon grau\n");
    escriuref("Forma: ax² + bx + c = 0\n\n");

    escriuref("Introdueix el valor de a: ");
    llegirf("%lf", &a);

    escriuref("Introdueix el valor de b: ");
    llegirf("%lf", &b);

    escriuref("Introdueix el valor de c: ");
    llegirf("%lf", &c);

    si (a == 0) {
        escriuref("No és una equació de segon grau.\n");
        retorna 0;
    }

    discriminant = b * b - 4 * a * c;

    si (discriminant > 0) {
        x1 = (-b + arrel_quadrada(discriminant)) / (2 * a);
        x2 = (-b - arrel_quadrada(discriminant)) / (2 * a);

        escriuref("Hi ha dues solucions reals:\n");
        escriuref("x1 = %.2lf\n", x1);
        escriuref("x2 = %.2lf\n", x2);
    }
    sino si (discriminant == 0) {
        x1 = -b / (2 * a);

        escriuref("Hi ha una única solució real:\n");
        escriuref("x = %.2lf\n", x1);
    }
    sino {
        doble part_real = -b / (2 * a);
        doble part_imaginaria = arrel_quadrada(-discriminant) / (2 * a);

        escriuref("L'equació té dues solucions complexes:\n");
        escriuref("x1 = %.2lf + %.2lfi\n", part_real, part_imaginaria);
        escriuref("x2 = %.2lf - %.2lfi\n", part_real, part_imaginaria);
    }

    retorna 0;
}
