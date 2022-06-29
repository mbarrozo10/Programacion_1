#ifndef BIBLO_H
#define BIBLO_H

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int ingresarEntero(char texto[],int min, int max);
void ingresarCadena (char texto[],char imp[],int minimo);
void ingresarCadenaCheck (char texto[],char imp[],int minimo);
char ingresarCaracter (char text[]);
char ingresarCheckCaracter(char texto[], char opcionUno, char opcionDos);
int checkString(char text[], int minimo);
int checkInt (int numero, int minimo, int maximo);
int checkCaracter(char letra, char opcionUno, char opcionDos);
int comprobarDigito (char sd[],char texto[]);
int comprobarCaracter (char sd[],char texto[]);


#endif
