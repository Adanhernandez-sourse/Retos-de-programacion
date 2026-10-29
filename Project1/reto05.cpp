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
 * Reto:   factorial de un numero                 *
 **************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int num; long long fact = 1;
    printf("Ingresa un numero (0-20): ");
    scanf("%d", &num);
    if (num < 0)
        printf("No existe\n");
    else if (num > 20)
        printf("Desborda long long\n");
    else {
        for (int i = 1; i <= num; i++) fact *= i;
        printf("Factorial de %d es %lld\n", num, fact);
    }
    return 0;
}