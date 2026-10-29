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
 * Reto:   mayor de tres numeros                  *
 **************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int a, b, c; 
    printf("3 numeros: "); 
    scanf("%d %d %d", &a, &b, &c);
    
    if (a >= b && a >= c) 
        printf("Mayor: %d", a);
    else if (b >= a && b >= c) 
        printf("Mayor: %d", b);
     else printf("Mayor: %d", c);
   
    return 0;
}