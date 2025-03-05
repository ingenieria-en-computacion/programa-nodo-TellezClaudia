#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

NODO* crear_nodo(){
    NODO* nuevo = ((NODO*) malloc (sizeof (NODO)));
    nuevo-> sig= NULL;
    nuevo-> dato=0;
    return nuevo;
}

bool borrar_nodo (NODO* n){
    if(n-> sig == NULL){
        free (n);
        return true;
}
return false;
}

DATO asignar_dato (NODO* n, DATO d){
    if(n != NULL){
        n-> dato=d;
    }
    return n;
}

NODO* obtener_dato (NODO* n){
    if (n== NULL){
        return 0;
    }
    return n->dato;
}

NODO* asignar_ref (NODO* n, NODO* m){
    if(n != NULL){
        n-> sig=m;
        return n;
    }
    return NULL;
}

NODO* obtener_ref (NODO* n){
    if (n != NULL){
        return n -> sig;
    }
}