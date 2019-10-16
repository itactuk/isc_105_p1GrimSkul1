//
// Created by Ivan's PC on 10/13/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "punto1Lib.h"

int main()
{
    int cant, cont = 0;
    printf("introduzca la cantidad de letras que tiene la palabra que desea invertir mas 1h: \n");
    scanf("%d",&cant);
    char palabra[cant], c;
    printf("introduzca la palabra letra por letra seguida de [ENTER] y cuando termine coloque un [.]  \n");
    scanf("%s",palabra);
    invierte (palabra, cont,cant);
    return 0;
}