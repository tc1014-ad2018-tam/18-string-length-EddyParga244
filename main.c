/*
 * Este programa fue realizado como la tarea#18 el 17 de octubre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es contar el numero de caracteres que hay en un string.
 *
 * Fecha: 17 de octubre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>

//Funcion del calculo de la logitud del string.
int longitud(char cadena[]){
    int i=0;
    int cont=0;

    //Mientras la posicion i sea diferente del caracter nulo (\0),
    //Se aumenta en 1 las variables i y cont.
    while (cadena[i]!='\0'){
        ++i;
        ++cont;
    }

    return cont;
}

int main() {
    //Declaracion de variables
    char cadena[100];
    int cont;

    //Se le pide al usuario escribir un texto.
    printf("Escribe un texto: ");
    fgets(cadena, sizeof(cadena),stdin); //Se lee la cadena
    cont=longitud(cadena); //Cont se le asigna lo que llama la funcion longitud
    printf("El total de caracteres de la cadena es %i", cont);

    return 0;
}