#ifndef ARBOL_COMPONENTES_H_INCLUDED
#define ARBOL_COMPONENTES_H_INCLUDED

typedef struct nodoA
{
    Componente info;
    nodoA *Hizq;
    nodoA *Hder;
} NodoArb;

typedef NodoArb *ArbolComponentes;


#endif // ARBOL_COMPONENTES_H_INCLUDED
