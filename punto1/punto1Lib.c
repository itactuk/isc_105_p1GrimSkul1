//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto1Lib.h"

/**
 * Invierte una cadena.
 * Dado: "Hola" debe de convertila en "aloH"
 * @param cadena
 */
void invierte (char cadena[], int i, int cantidad)
{
    if (cadena[i] == cadena[cantidad])
    {
        return;
    }
    else
    {
        invierte(cadena,i+1,cantidad);
    }
    printf("%c", cadena [i]);
}
