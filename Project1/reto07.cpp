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
 * Reto:   suma de un arreglo                      *
 **************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int numeros[5], suma = 0;
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1); 
        scanf("%d", &numeros[i]);
        suma += numeros[i];
    }
    printf("Suma total: %d\n", suma);
    return 0;
}