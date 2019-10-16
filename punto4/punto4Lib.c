//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto4Lib.h"

struct producto _busqueda_binaria_recursiva(int id, struct producto prods[], int ii, int is){
    if (ii>is) return -1;
    if (ii<0) return -1;
    int im = (is-ii)/2+ii;
        if (id == prods[im]) return im;
        if(im > prods[im]){
        return busqueda_binaria(id,prods, im +1,is);
} return busqueda_binaria(id,prods, ii,im-1);
}

/**
 * Si no encuentra el producto debe de retornar -1 en el id del producto
 * @param id
 * @param productos
 * @param n es la cantidad de elementos en el arreglo produtos
 * @return
 */
struct producto busqueda_binaria(int id, struct producto productos[], int n){
    if (id<0) struct -1;
    return _busqueda_binaria_recursiva(id, productos, 0, n-1);
}

/**
 * Debe ser implementado con recursividad.
 * Si no encuentra el producto debe de retornar -1 en el id del producto
 * @param id
 * @param prods
 * @param ii es el indice inferior
 * @param is es el indice superior
 * @return
 */
struct producto _busqueda_binaria_recursiva(int id, struct producto prods[], int ii, int is){
    if (ii > is) struct -1;
    if (ii<0) struct -1;
    int im = (is-ii)/2+ii;
    if (prods[im] == id) return im;
    if (id != prods[im]) struct -1;
    if(is>prods[im]){
        return busqueda_binaria(id,prods, im +1,is);
    } return busqueda_binaria(id,prods, im - 1,is);


}