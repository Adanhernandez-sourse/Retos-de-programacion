/**************************************************
 * Universidad Politecnica de Tulancingo          *
 * Ingenieria en sistemas electronicos            *
 * Programacion estructurada                      *
 * septiembre-diciembre 2026                      *
 * A Negrete                                      *
 **************************************************
 * App que maneja la terminal o simbolo del       *
 * sistema                                        *
 * Alumno: Adan Hernandez Hernandez               *
 * Reto: 12             *
 **************************************************/

#include <stdio.h>

int main() {
    printf("=== 1. Variable simple ===\n");

    int numero = 10;
    int* ptr = &numero;

    printf("Valor de numero: %d\n", numero);
    printf("Direccion de numero: %p\n", (void*)&numero);
    printf("Valor al que apunta ptr (*ptr): %d\n", *ptr);

    *ptr = 25;
    printf("\nDespues de hacer *ptr = 25:\n");
    printf("Valor de numero: %d\n", numero);

    printf("\n=== 2. Arreglo ===\n");

    int numeros[5] = { 10, 20, 30, 40, 50 };
    int* pArr = numeros;

    printf("\nForma 1: con indice numeros[i]\n");
    for (int i = 0; i < 5; i++) {
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    printf("\nForma 2: con *(pArr + i)\n");
    for (int i = 0; i < 5; i++) {
        printf("*(pArr + %d) = %d | Direccion: %p\n", i, *(pArr + i), (void*)(pArr + i));
    }

    printf("\nForma 3: moviendo el apuntador pArr++\n");
    pArr = numeros;
    for (int i = 0; i < 5; i++) {
        printf("Valor: %d | Direccion: %p\n", *pArr, (void*)pArr);
        pArr++;
    }

    *(numeros + 2) = 99;
    printf("\nDespues de hacer *(numeros + 2) = 99:\n");
    printf("numeros[2] = %d\n", numeros[2]);

    printf("\nFin del programa.\n");
    return 0;
}