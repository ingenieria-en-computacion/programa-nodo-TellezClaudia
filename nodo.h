#ifndef __NODO_H__
#define __NODO_H__
#include <stdbool.h>

typedef int DATO;

typedef struct Nodo{
    DATO dato;
    struct Nodo* sig;
} NODO;

NODO* crear_nodo();
bool borrar_nodo(NODO*);
DATO asignar_dato (NODO*, DATO);
NODO* obtener_dato(NODO*);
NODO* asignar_ref(NODO*, NODO*);
NODO* otener_ref(NODO*);

#endif