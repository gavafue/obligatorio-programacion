#include "matrices.h"

int main()
{
    arreglo b;
    matriz A, K;
    int i, j, m, f, c, x, y, casoSwitch;
    m = f = c = x = y = 0;
    printf("Cargaremos una matriz de orden %dx%d\n", N, N);
    for (j = 0; j < N; j++)
    {
        for (i = 0; i < N; i++)
        {
            printf("Ingresa el valor A[%d][%d]:\n", j + 1, i + 1);
            scanf("%d", &A[j][i]);
        }
    }

    printf("La matriz cargada es:\n");
    imprimir(A);
    do
    {
        printf("\n\n-----------------\nOpciones disponibles:\n"
               "1 : Pertenece\n"
               "2 : Sustituir\n"
               "3 : Multiplicar\n"
               "4 : Copiar\n"
               "5 : Producto escalar\n"
               "6 : Transferir\n"
               "7 : Desplegar por filas\n"
               "8 : Desplegar por columnas\n"
               "0 : Salir\n"
               "Ingrese el numero de la operacion que desea realizar\n----------------\n");

        scanf("%d", &casoSwitch);
        switch (casoSwitch)
        {
        case 1:
            printf("Para utilizar PERTENECE escribe un elemento a buscar.\n");
            scanf("%i", &m);
            pertenece(A, m);
            break;
        case 2:
            printf("Para utilizar SUSTITUIR:\n"
                   "¿En que fila sustituiras?\n");
            scanf("%d", &f);
            printf("¿En que columna sustituiras?\n");
            scanf("%d", &c);
            printf("¿Que elemento deseas colocar en dicha posicion?\n");
            scanf("%d", &m);
            sustituir(A, m, f, c);
            break;
        case 3:
            printf("Para utilizar MULTIPLICAR:\n"
                   "Escribe el exponente al cual se multiplicara la matriz\n");
            scanf("%d", &m);
            multiplicar(A, m);
            break;
        case 4:
            printf("Para mostrar la operacion COPIAR, utilizaremos la matriz auxiliar K:\n");
            for (x = 0; x < N; x++)
            {
                for (y = 0; y < N; y++)
                {
                    printf("Ingresa el valor K[%d][%d]:\n", x + 1, y + 1);
                    scanf("%d", &K[x][y]);
                }
            }
            copiar(K, A);
            printf("Copiamos la matriz K en la matriz\n");
            imprimir(A);
            break;
        case 5:
            printf("Operacion PRODUCTO ESCALAR\n");
            printf("Escribe el escalar por el cual se multiplicara la matriz\n");
            scanf("%d", &m);
            productoEscalar(A, m);
            break;
        case 6:
            printf("Operacion TRANSFERIR\n"
                   "Transferiremos la Matriz A al arreglo B\n");
            transferir(A, b);
            break;
        case 7:
            printf("Operacion DESPLEGAR POR FILAS\n"
                   "Resultado Matriz A desplegado por filas:\n");
            desplegarPorFilas(A);
            break;
        case 8:
            printf("Operacion DESPLEGAR POR COLUMNAS\n"
                   "Resultado Matriz A desplegado por columnas:\n");
            desplegarPorColumnas(A);
            break;
        default:
            break;
        }
    } while (casoSwitch != 0);
    printf("Programa terminado");

    return 0;
}
