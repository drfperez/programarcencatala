# 📚 stdlibcat

**Programa en C utilitzant paraules clau en català.**

`stdlibcat.h` és una llibreria que tradueix moltes de les paraules clau, tipus de dades i funcions més habituals de C al català mitjançant macros (`#define`). L'objectiu és facilitar l'aprenentatge de la programació en C a estudiants catalanoparlants i oferir una forma diferent i didàctica d'escriure programes.

---

# ✨ Característiques

* 🇨🇦 Paraules clau en català.
* 🔤 Tipus de dades traduïts.
* 📖 Funcions de la biblioteca estàndard amb noms catalans.
* 🎓 Ideal per aprendre C.
* ⚡ Compatible amb qualsevol compilador de C modern.

---

# Exemple

## C tradicional

```c
#include <stdio.h>

int main() {
    int edat = 18;

    if (edat >= 18) {
        printf("Ets major d'edat\n");
    } else {
        printf("Ets menor d'edat\n");
    }

    return 0;
}
```

## Amb stdlibcat

```c
#include "stdlibcat.h"

enter principal() {

    enter edat = 18;

    si (edat >= 18) {
        escriuref("Ets major d'edat\n");
    }
    sino {
        escriuref("Ets menor d'edat\n");
    }

    retorna 0;
}
```

---

# Instal·lació

Només cal copiar el fitxer `stdlibcat.h` al mateix directori del projecte.

Després:

```c
#include "stdlibcat.h"
```

Ja es poden utilitzar totes les paraules en català.

---

# Paraules clau disponibles

| C        | stdlibcat   |
| -------- | ----------- |
| int      | enter       |
| float    | real        |
| double   | doble       |
| char     | caràcter    |
| void     | buit        |
| bool     | cert / fals |
| if       | si          |
| else     | sino        |
| while    | mentre      |
| do       | fes         |
| for      | per         |
| switch   | tria        |
| case     | cas         |
| default  | defecte     |
| break    | trenca      |
| continue | continua    |
| return   | retorna     |
| struct   | estructura  |
| union    | unió        |
| enum     | enumera     |
| typedef  | tipus       |

---

# Funcions disponibles

Algunes de les traduccions més útils:

| Original | stdlibcat        |
| -------- | ---------------- |
| printf   | escriuref        |
| scanf    | llegirf          |
| fopen    | obrir_fitxer     |
| fclose   | tancar_fitxer    |
| malloc   | assigna_memoria  |
| calloc   | assigna_i_inicia |
| realloc  | reasigna_memoria |
| free     | allibera         |
| strcpy   | copia_cadena     |
| strcat   | concatena_cadena |
| strlen   | longitud_cadena  |
| strcmp   | compara_cadena   |
| sqrt     | arrel_quadrada   |
| pow      | potencia         |
| sin      | sinus            |
| cos      | cosinus          |
| tan      | tangent          |
| log      | logaritme        |
| abs/fabs | valor_absolut    |
| rand     | genera_aleatori  |
| srand    | llavor_aleatòria |
| time     | temps_actual     |

---

# Exemple: Equació de segon grau

```c
doble discriminant;

discriminant = b*b - 4*a*c;

si (discriminant > 0) {
    escriuref("Dues solucions.\n");
}
sino {
    escriuref("Una o cap solució real.\n");
}
```

---

# Requisits

* GCC
* Clang
* Visual Studio
* Code::Blocks
* Dev-C++
* Qualsevol compilador compatible amb C99 o superior

---

# Compilar

Linux o macOS

```bash
gcc programa.c -o programa -lm
```

Windows (MinGW)

```bash
gcc programa.c -o programa.exe -lm
```

---

# Objectius del projecte

* Apropar la programació en C als estudiants catalanoparlants.
* Fer els exemples més fàcils de llegir.
* Crear una alternativa educativa a la sintaxi tradicional.
* Promoure l'ús del català en l'àmbit de la programació.

---

# Contribucions

Les contribucions són benvingudes.

Es poden proposar:

* Noves traduccions.
* Correcció d'errors.
* Millores de documentació.
* Nous exemples.
* Compatibilitat amb més compiladors.

---

# Llicència

Aquest projecte és de codi obert. Pots utilitzar-lo, modificar-lo i distribuir-lo segons la llicència que decideixis incloure al repositori (per exemple, MIT).

---

# Autor

Creat amb ❤️ per promoure la programació en català.

Si aquest projecte t'ha estat útil, deixa una ⭐ al repositori de GitHub!
