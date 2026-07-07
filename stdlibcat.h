/*
 * stdlibcat.h  –  Programeu en C amb noms catalans
 */
#ifndef STDLIBCAT_H
#define STDLIBCAT_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <stddef.h>
#include <stdbool.h>
#define buit void
#define enter int
#define caràcter char
#define real float
#define doble double
#define llarg long
#define curt short
#define sense_signar unsigned
#define amb_signar signed
#define cert true
#define fals false
#define NUL NULL
#define si if
#define sino else
#define mentre while
#define per for
#define fes do
#define fins while
#define tria switch
#define cas case
#define defecte default
#define trenca break
#define continua continue
#define retorna return
#define estructura struct
#define unió union
#define enumera enum
#define tipus typedef
#define constant const
#define volàtil volatile
#define estàtic static
#define registre register
#define mida_de sizeof
#define funció
#define principal main
#define i &&
#define o ||
#define no !
#define FITXER FILE
#define FI_DE_FITXER EOF
#define escriuref printf
#define escriuref_s sprintf
#define escriuref_f fprintf
#define llegirf scanf
#define llegirf_s sscanf
#define llegirf_f fscanf
#define obrir_fitxer fopen
#define tancar_fitxer fclose
#define llegir_caracter fgetc
#define escriure_caracter fputc
#define llegir_linia fgets
#define escriure_linia fputs
#define posicio_fitxer ftell
#define moure_fitxer fseek
#define rebobinar rewind
#define assigna_memoria malloc
#define allibera free
#define assigna_i_inicia calloc
#define reasigna_memoria realloc
#define surt exit
#define avorta abort
#define a_enter atoi
#define a_llarg atol
#define a_doble atof
#define genera_aleatori rand
#define llavor_aleatòria srand
#define copia_cadena strcpy
#define copia_cadena_n strncpy
#define concatena_cadena strcat
#define concatena_cadena_n strncat
#define longitud_cadena strlen
#define compara_cadena strcmp
#define compara_cadena_n strncmp
#define busca_en_cadena strstr
#define busca_caracter strchr
#define arrel_quadrada sqrt
#define potencia pow
#define sinus sin
#define cosinus cos
#define tangent tan
#define logaritme log
#define logaritme10 log10
#define valor_absolut fabs
#define sostre ceil
#define terra floor
#define es_alfabetic isalpha
#define es_digit isdigit
#define es_alfanumeric isalnum
#define es_minuscula islower
#define es_majuscula isupper
#define es_espai isspace
#define a_minuscula tolower
#define a_majuscula toupper
#define temps_actual time
#endif
