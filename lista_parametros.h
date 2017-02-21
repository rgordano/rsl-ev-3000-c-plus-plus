#ifndef LISTA_PARAMETROS_H_INCLUDED
#define LISTA_PARAMETROS_H_INCLUDED

//Tipo lista de parametros
typedef struct nodoP
{
    string parametro;
    nodoP *sig;
} NodoParametros;


typedef NodoParametros *ListaParametros;


#endif // LISTA_PARAMETROS_H_INCLUDED
