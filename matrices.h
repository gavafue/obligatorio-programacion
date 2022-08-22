#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;


typedef int matriz[4][4];
typedef int arreglo[16];
//Funciones auxiliares
void copiar(matriz A, matriz B);
void imprimir(matriz A);
//Operaciones elementales
bool pertenece(matriz A, int b);
void sustituir(matriz A, int elemento, int fila, int columna);
void productoEscalar(matriz A, int entero);
void multiplicar(matriz A, int exponente);
void transferir(matriz A, arreglo b);
void desplegarPorFilas(matriz A);
void desplegarPorColumnas(matriz A);

#endif// ARBOL_H_INCLUDED