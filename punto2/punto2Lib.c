//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto2Lib.h"


/**
 * Suma dos numeros complejos.
 * Dado 3+4j y 2+3j debe de retornar 5+7j
 * @param a
 * @param b
 * @return
 */
COMPLEJO suma(COMPLEJO a, COMPLEJO b){
    double resreal = 0;
    double resimaginaria = 0;
    resimaginaria = a.imaginaria + b.imaginaria;
    resreal = a.real + b.real;
    struct resimaginaria;
    struct resreal;
}

/**
 * Resta 2 numeros complejos
 * Dado 3+4j y 2+3j debe de retornar 1+1j
 * @param a
 * @param b
 * @return
 */
struct complejo resta(COMPLEJO a, COMPLEJO b){
    double resreal = 0;
    double resimaginaria = 0;
    resimaginaria = a.imaginaria - b.imaginaria;
    resreal = a.real - b.real;
    struct resimaginaria;
    struct resreal;
}

/**
 * Multiplica 2 numeros complejos
 * Dado 3+4j y 2+3j
 * (3+4j) * (2+3j) -> 2*(3+4j) + 3j*(3+4j) -> 6+8j+9j+12j^2 -> 6+17j-12 -> -6+17j
 * Debe de retornar -6+17j
 * @param a
 * @param b
 * @return
 */
COMPLEJO multiplica(struct complejo a, struct complejo b){
    double resreal = 0;
    double resimaginaria = 0;
    resreal = a.real*b.real-a.imaginaria*b.imaginaria;
    resimaginaria = a.real*b.imaginaria+a.imaginaria*b.real;
    struct resimaginaria;
    struct resreal;
}

/**
 * Divide 2 numeros complejos
 * Dado 3+4j y 2+3j
 * (3+4j) / (2+3j) -> ((3+4j)*(2-3j)) / ((2+3j)*(2-3j)) -> (18-1j) / (13+0j) -> (18/13) - (1/13)j
 * Debe de retornar 1.3846... - 0.0769...j
 * @param a
 * @param b
 * @return
 */
COMPLEJO divide(COMPLEJO a, COMPLEJO b){
    double resreal = 0;
    double resimaginaria = 0;
    resreal = (a.real*b.real+a.imaginaria*b.imaginaria)/(b.real*b.real)+(b.imaginaria*b.imaginaria);
    resimaginaria = (a.imaginaria*b.real-a.real*b.imaginaria)/(b.real*b.real)+(b.imaginaria*b.imaginaria);
    struct resimaginaria;
    struct resreal;
}