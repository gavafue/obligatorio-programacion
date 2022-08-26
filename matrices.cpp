#include "matrices.h"

// Función auxiliar para imprimir matrices
void imprimir(matriz A)
{
    int i, j;
    for (j = 0; j < N; j++)
    {
        printf("\n");
        for (i = 0; i < N; i++)
        {
            printf("%d\t", A[j][i]);
        }
        printf("\n");
    }
}

void copiar(matriz A, matriz B)
{
    int i, j;
    for (j = 0; j < N; j++)
    {
        for (i = 0; i < N; i++)
        {
            B[j][i] = A[j][i];
        }
    }
    return;
}

bool pertenece(matriz A, int b)
{
    int j, i;
    bool esta = false;
    for (j = 0; j < N; j++)
    {
        for (i = 0; i < N; i++)
        {
            if (A[j][i] == b)
            {
                esta = true;
                printf("Numero %d encontrado en la posicion [%d][%d]\n", b, j + 1, i + 1);
            }
        }
    }
    if (!esta)
    {
        printf("Numero no encontrado\n");
    }
    return esta;
}

void sustituir(matriz A, int elemento, int fila, int columna)
{
    printf("Se sustituira en la matriz la posicion [%d][%d] por el numero %d\n", fila, columna, elemento);
    A[fila - 1][columna - 1] = elemento;
    printf("La matriz alterada es:\n");
    imprimir(A);
    return;
}

void multiplicar(matriz A, int b)
{
    matriz C;
    copiar(A, C);
    printf("Se multiplicara la matriz A por si misma %d veces\n", b);
    int i, j;
    for (j = 0; j < N; j++)
    {
        for (i = 0; i < N; i++)
        {
            for (int producto = 1; producto < b; producto++)
            {
                A[j][i] *= C[j][i];
            }
        }
    }
    printf("Matriz resultante: \n");
    imprimir(A);
    return;
}
void productoEscalar(matriz A, int b)
{
    printf("Se multiplicara la matriz por el entero: %d\n", b);
    int columna, fila;
    for (fila = 0; fila < N; fila++)
    {
        for (columna = 0; columna < N; columna++)
        {
            A[fila][columna] *= b;
        }
    }
    imprimir(A);
}

void transferir(matriz A, arreglo b)
{
    int i, j, contador;
    contador = 0;
    for (j = 0; j < N; j++)
    {
        for (i = 0; i < N; i++)
        {
            b[contador] = A[j][i];
            contador++;
        }
    }
    printf("[");
    for (int k = 0; k < 16; k++)
    {
        printf("%d, ",
               b[k]);
    }
    printf("]");
    printf("\n");
}

void desplegarPorFilas(matriz A)
{
    int i, j;
    for (j = 0; j < N; j++)
    {
        printf("Fila %d: ", j + 1);
        for (i = 0; i < N; i++)
        {
            printf("%d\t", A[j][i]);
        }
        printf("\n");
    }
}

void desplegarPorColumnas(matriz A)
{
    int i, j;
    for (j = 0; j < N; j++)
    {
        printf("Columna %d: ", j + 1);
        for (i = 0; i < N; i++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
}
