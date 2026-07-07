#include "stdlibcat.h"

enter principal() {

    doble saldo = 1000.0;
    doble quantitat;
    enter opcio;

    fes {

        escriuref("\n=========================\n");
        escriuref("     CAIXER AUTOMÀTIC\n");
        escriuref("=========================\n");
        escriuref("1. Consultar saldo\n");
        escriuref("2. Ingressar diners\n");
        escriuref("3. Retirar diners\n");
        escriuref("4. Sortir\n");
        escriuref("Opció: ");

        llegirf("%d", &opcio);

        tria(opcio) {

            cas 1:
                escriuref("\nSaldo actual: %.2lf €\n", saldo);
                trenca;

            cas 2:
                escriuref("Quant vols ingressar? ");
                llegirf("%lf", &quantitat);

                si (quantitat > 0) {
                    saldo += quantitat;
                    escriuref("Ingrés realitzat.\n");
                }
                sino {
                    escriuref("Quantitat no vàlida.\n");
                }
                trenca;

            cas 3:
                escriuref("Quant vols retirar? ");
                llegirf("%lf", &quantitat);

                si (quantitat <= 0) {
                    escriuref("Quantitat no vàlida.\n");
                }
                sino si (quantitat > saldo) {
                    escriuref("Saldo insuficient.\n");
                }
                sino {
                    saldo -= quantitat;
                    escriuref("Retirada realitzada.\n");
                }
                trenca;

            cas 4:
                escriuref("Fins aviat!\n");
                trenca;

            defecte:
                escriuref("Opció incorrecta.\n");
        }

    } fins (opcio == 4);

    retorna 0;
}
