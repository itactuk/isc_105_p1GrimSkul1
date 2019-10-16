//
// Created by Ivan's PC on 10/13/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "punto2Lib.h"

int main()
{
    char elec;
    int compla, complb;
    printf("Calculos con numeros complejos: \n Suma: 's'\n Resta:: 'r'\n Multiplicacion: 'm'\n Division: 'd'");
    scanf(" %c",elec);
    if (elec == 's'){
        printf("escriba su primer numero complejo:\t");
        scanf("%d",compla);
        printf("escriba su segundo numero complejo:\t");
        scanf("%d",complb);
    }

    if (elec == 'r'){
        printf("escriba su primer numero complejo:\t");
        scanf("%d",compla);
        printf("escriba su segundo numero complejo:\t");
        scanf("%d",complb);
    }

    if (elec == 'm'){
        printf("escriba su primer numero complejo:\t");
        scanf("%d",compla);
        printf("escriba su segundo numero complejo:\t");
        scanf("%d",complb);
    }
    if (elec == 'd'){
        printf("escriba su primer numero complejo:\t");
        scanf("%d",compla);
        printf("escriba su segundo numero complejo:\t");
        scanf("%d",complb);
    }

}