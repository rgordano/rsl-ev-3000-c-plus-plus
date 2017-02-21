#ifndef COMPONENTE_H_INCLUDED
#define COMPONENTE_H_INCLUDED

//Tipo de datos
typedef enum {LETRA,OPERADOR,PARENTESIS} TipoDato;

//componente de una expresion
typedef struct
{
    int valor;
    TipoDato tipo;
    union
    {
        char operador;
        char letra;
        char parentesis;
    } dato;

} Componente;


#endif // COMPONENTE_H_INCLUDED
