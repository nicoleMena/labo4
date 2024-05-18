// Nicole Mena Porras C14663
// Inicio del codigo

#include <stdio.h>

int busquedaLineal(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1; 
}

int busquedaBinaria(int arr[], int inicio, int fin, int x) {
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;

        if (arr[medio] == x) {
            return medio;
        }
        if (arr[medio] < x) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return -1; 
}

int busquedaBinariaRecursiva(int arr[], int inicio, int fin, int x) {
    if (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;

        if (arr[medio] == x) {
            return medio;
        }
        if (arr[medio] < x) {
            return busquedaBinariaRecursiva(arr, medio + 1, fin, x);
        } else {
            return busquedaBinariaRecursiva(arr, inicio, medio - 1, x);
        }
    }
    return -1; 
}

int main() {
    int arr[] = {2, 4, 6, 23, 56, 79};
    int n = sizeof(arr) / sizeof(arr[0]);
    int valor;

    printf("Ingrese un numero entero, por favor: ");
    scanf("%d", &valor);

  
    int resultadoLineal = busquedaLineal(arr, n, valor);
    if (resultadoLineal != -1) {
        printf("El numero se encuentra en la siguiente posición %d (Búsqueda Lineal)\n", resultadoLineal);
    } else {
        printf("El numero ingresado no se encuentra en la secuencia, intente de nuevo (Búsqueda Lineal)\n");
    }

    int resultadoBinaria = busquedaBinaria(arr, 0, n - 1, valor);
    if (resultadoBinaria != -1) {
        printf("El numero se encuentra en la siguiente posición %d (Búsqueda Binaria Iterativa)\n", resultadoBinaria);
    } else {
        printf("El numero ingresado no se encuentra en la secuencia, intente de nuevo (Búsqueda Binaria Iterativa)\n");
    }

    int resultadoBinariaRecursiva = busquedaBinariaRecursiva(arr, 0, n - 1, valor);
    if (resultadoBinariaRecursiva != -1) {
        printf("El numero se encuentra en la siguiente posición %d (Búsqueda Binaria Recursiva)\n", resultadoBinariaRecursiva);
    } else {
        printf("El numero ingresado no se encuentra en la secuencia, intente de nuevo (Búsqueda Binaria Recursiva)\n");
    }

    return 0;
}

// fin del codigo, gracias...
