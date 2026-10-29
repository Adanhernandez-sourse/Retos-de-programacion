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
 * Reto:   tabla de multiplicar                   *
 **************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n; 
    printf("Numero: "); 
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) 
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}