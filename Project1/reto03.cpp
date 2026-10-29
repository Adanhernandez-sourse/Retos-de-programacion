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
 * Reto:   par o impar                            *
 **************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n; printf("Numero: "); 
    scanf("%d", &n);
    if (n % 2 == 0) 
        printf("PAR\n"); 
    else printf("IMPAR\n");
    return 0;
}