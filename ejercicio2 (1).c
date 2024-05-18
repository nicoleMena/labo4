// Nicole Mena Porras C14663

// inicio del codigo:
#include <stdio.h>

int encontrarMinimo(int *arr, int longitud) {
    int minimo = arr[0];
    for (int i = 1; i < longitud; i++) {
        if (arr[i] < minimo) {
            minimo = arr[i];
        }
    }
    return minimo;
}

int encontrarMaximo(int *arr, int longitud) {
    int maximo = arr[0];
    for (int i = 1; i < longitud; i++) {
        if (arr[i] > maximo) {
            maximo = arr[i];
        }
    }
    return maximo;
}

void encontrarMinMax(int *arreglo, int *minimo, int *maximo, int longitud) {
    *minimo = arreglo[0];
    *maximo = arreglo[0];
    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] < *minimo) {
            *minimo = arreglo[i];
        }
        if (arreglo[i] > *maximo) {
            *maximo = arreglo[i];
        }
    }
}
// esta es la funcion principal que hice...
int main() {
    int arr[] = {21, 24, 65, 3, 56, 12, 35, 15};
    int longitud = sizeof(arr) / sizeof(arr[0]);

    int minimo = encontrarMinimo(arr, longitud);
    printf("El numero mínimo del arreglo: %d\n", minimo);

    int maximo = encontrarMaximo(arr, longitud);
    printf("El numero máximo del arreglo: %d\n", maximo);

    int min, max;
    encontrarMinMax(arr, &min, &max, longitud);
    printf("se utilizaron punteros, el numeros mínimo es: %d, por otro lado, el numero máximo es: %d\n", min, max);

    return 0;
}

// fin del codigo.
